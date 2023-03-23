//
//  BLEController.swift
//  FlyFit
//
//  Created by Jacob  Loranger on 3/9/23.
//

import Foundation
import CoreBluetooth
import UIKit

class BLEController: NSObject, ObservableObject, CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBPeripheralDelegate {
    // Variables that should be assigned when instance of this class are called
    var tx: String! = ""
    var rx: String! = ""
    var service: String! = ""
    
    var centralManager: CBCentralManager!
    var targetPeripheral: CBPeripheral!
    
    var rxCharacteristic: CBCharacteristic!
    var txCharacteristic: CBCharacteristic!
    var status: String = "Not connected"
    var statusLabel: UILabel?
    
    // Function to create the central manager and start scanning for the peripheral
    func setup() {
        centralManager = CBCentralManager(delegate: self, queue: nil)
        print(tx, rx, service)
        
    }
    
//    func saveData(dataPoint: String) {
//        var database = DataController()
//        guard let dataAdder = database.add(_type: Sensor.self) else { return }
//
//        dataAdder.id = String()
//        dataAdder.bTemp = Double()
//
//        database.save()
//    }
    
    // This function is called by the central manager when the state is set to powered on
    func startScanning() {
        centralManager?.scanForPeripherals(withServices:nil)
        status = "Scanning"
        statusLabel?.text = status
        print(status)
    }
    
    // MARK: Central Manager Delegate Functions
        
    func centralManagerDidUpdateState(_ central: CBCentralManager) {
        // Determines which state the central is in (This app)
        switch central.state {
          case .poweredOff:
            print("Is Powered Off.")
          case .poweredOn:
            print("Is Powered On.")
            // Scans for peripherals if the central is on
            startScanning()
          case .unsupported:
            print("Is Unsupported.")
          case .unauthorized:
            print("Is Unauthorized.")
          case .unknown:
            print("Unknown")
          case .resetting:
            print("Resetting")
          @unknown default:
            print("Error")
        }
    }
    
    // Compares discovered peripherals to the tx of the input peripheral
    func centralManager(_ central: CBCentralManager, didDiscover peripheral: CBPeripheral, advertisementData: [String : Any], rssi RSSI: NSNumber) {
        
        print(String(describing: peripheral.identifier))
        
        // If the discovered peripheral identifier matches the inputted tx value, then the central anager connects to it.
        if String(describing: peripheral.identifier) == tx{
            // Calls didConnect extension
            print(true)
            targetPeripheral = peripheral
            print(String(describing: peripheral))
            // Stops scanning for peripherals
            centralManager.stopScan()
            // Connects to the target peripheral
            centralManager?.connect(targetPeripheral!, options: nil)
        }
        
        else {
            print(false)
        }

        // Changes status conditions
        if peripheral.name != nil {
            status = "Peripheral Name: \(peripheral.name!) \nPeripheral State: \(peripheral.state.rawValue) "
            statusLabel?.text = status

            print(status)
        }
    }
    
    func centralManager(_ central: CBCentralManager, didConnect peripheral: CBPeripheral) {
        status = "Connected"
        statusLabel?.text = status

        // Assigning the delegate and discover services UUID for the peripheral
        targetPeripheral.delegate = self
        targetPeripheral.discoverServices([CBUUID(string: service)])

        print(String(describing: targetPeripheral.state))

    }
    
    
    //Performs these functions when it discovers services
    func peripheral(_ peripheral: CBPeripheral, didDiscoverServices error: Error?) {
        guard let services = peripheral.services else {
            return
        }
        // Discover ther services
        for service in services {
            peripheral.discoverCharacteristics(nil, for: service)
            print("Discovered Services: \(services)")
        }
    }
    
    // MARK: Peripheral Manager Delegate Functions
    
    func peripheralManagerDidUpdateState(_ peripheral: CBPeripheralManager) {
        // Printing the state of ther peripheral
        switch peripheral.state {
            case .poweredOn:
                print("Peripheral Is Powered On.")
            case .unsupported:
                print("Peripheral Is Unsupported.")
            case .unauthorized:
                print("Peripheral Is Unauthorized.")
            case .unknown:
                print("Peripheral Unknown")
            case .resetting:
                print("Peripheral Resetting")
            case .poweredOff:
                print("Peripheral Is Powered Off.")
            @unknown default:
                print("Error")
        }
    }
    
    // MARK: Peripheral Delegate
    
    func peripheral(_ peripheral: CBPeripheral, didDiscoverCharacteristicsFor service: CBService, error: Error?) {
        // Assigning only the service characteristics to characteristics
        guard let characteristics = service.characteristics else {
            return
        }

        // Assigning the characteristic value of rx and tx to the rxCharacteristic and txCharacteristic variables
        for characteristic in characteristics {
            if characteristic.uuid.isEqual(CBUUID(string: tx))  {
                txCharacteristic = characteristic
                
        // Setting the notify and read values to the rx characteristic
                peripheral.setNotifyValue(true, for: txCharacteristic!)
                peripheral.readValue(for: characteristic)
                

                print("TX Characteristic: \(txCharacteristic.uuid)")
            }
            
        // Setting the notify value to the tx characteristic
            if characteristic.uuid.isEqual(CBUUID(string: rx)){
                rxCharacteristic = characteristic
                
                print(characteristic)
                
                peripheral.setNotifyValue(true, for: rxCharacteristic!)
                print("RX Characteristic: \(rxCharacteristic.uuid)")
            }
        }
    }
    
    func peripheral(_ peripheral: CBPeripheral, didUpdateValueFor characteristic: CBCharacteristic, error: Error?) {
        
        var characteristicASCIIValue = NSString()
        guard characteristic == txCharacteristic,
        let characteristicValue = characteristic.value,
        let ASCIIstring = NSString(data: characteristicValue, encoding: String.Encoding.utf8.rawValue) else { return }
        characteristicASCIIValue = ASCIIstring
    
        
        // Specific to testing microcontroller code
        let tempString = String(characteristicASCIIValue).split(separator: ",")[0]
        var tempPoint = (tempString as NSString).integerValue
//        var tempTime = NSDate()
        print(tempPoint)
        
        
        // Save data to CoreData
        let database = DataController()
        guard let dataPoint = database.add(_type: Sensor.self) else { return }
        dataPoint.bTemp = Double(tempPoint) // This is where we will parse the data sent
        dataPoint.time = Date()
        
        database.save()
    }
    
}
