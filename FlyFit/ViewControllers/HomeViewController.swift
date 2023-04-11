//
//  HomeViewController.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/2/23.
//


import UIKit
import MapboxMaps
import CoreBluetooth

class HomeViewController: UIViewController {
    internal var mapView: UIView!
    let BLE = BLEController()
    var statusLabel: UILabel!

    override var preferredStatusBarStyle: UIStatusBarStyle {
        return .lightContent
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = Style().primaryBackgroundColor
        
        let header = AddElements().addHeader(title: "Summary")
        mapView = AddElements().addMap(frame: CGRect(x: 0, y: view.bounds.height*0.125, width: view.bounds.width, height: view.bounds.height*0.69))
        
        view.addSubview(header)
        view.addSubview(mapView)
        
        view.addSubview(FastStatsView().startFlightView(frame: CGRect(x: 0, y: view.bounds.height*0.777, width: view.bounds.width, height: view.bounds.height*0.14)))
    }
    
    @objc func startFlight() {
        print("Button Pressed")
        BLE.tx = CBUUIDs.tx
        BLE.rx = CBUUIDs.rx
        BLE.statusLabel = statusLabel
        BLE.service = CBUUIDs.service
        BLE.setup()
        
        view.addSubview(FastStatsView().stopFlightView(frame: CGRect(x: 0, y: view.bounds.height*0.777, width: view.bounds.width, height: view.bounds.height*0.14)))
    }
    
    @objc func stopFlight() {
        view.addSubview(FastStatsView().startFlightView(frame: CGRect(x: 0, y: view.bounds.height*0.777, width: view.bounds.width, height: view.bounds.height*0.14)))
        
    }
}

