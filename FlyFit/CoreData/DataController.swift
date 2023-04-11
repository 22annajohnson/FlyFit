//
//  DataController.swift
//  FlyFit
//
//  Created by Jacob  Loranger on 3/3/23.
//

import Foundation
import CoreData
import UIKit
import SwiftUI


struct CoorType {
    var x: Date
    var y: Double
}

struct AccelerometerData {
    var time: Date
    var x: Double
    var y: Double
    var z: Double
}

class DataController: ObservableObject {
    var sensorData = [Sensor]()
    
    let viewContext = (UIApplication.shared.delegate as! AppDelegate).persistentContainer.viewContext
    
    func add<T: NSManagedObject>(_type: T.Type) -> T? {
        guard let entityName = T.entity().name else { return nil}
        guard let entity = NSEntityDescription.entity(forEntityName: entityName , in: viewContext) else { return nil }
        let object = T(entity: entity, insertInto: viewContext)
        return object
    }
    
    func save() {
        do {
            try viewContext.save()
        } catch {
            print(error.localizedDescription)
        }
        
    }
    
//    Fetches data
    func fetchData() -> [Sensor] {
        do {
            sensorData = try viewContext.fetch(Sensor.fetchRequest())
        } catch {
            print("couldnt fetch")
        }
        return sensorData
    }
    

//    Parse data
//    TODO: After NEBEC, make the y axis only scale for last 20 data points rather than all data
    func parseData(id: String) -> (output: [CoorType], maxValue: Double, minValue: Double, maxTime: Date, minTime: Date) {
//        print("parse")
        var coreDataID: String = ""
        switch id {
        case "Body Temperature":
            coreDataID = "bTemp"
        case "Cabin Temperature":
            coreDataID = "cTemp"
        default:
            print("parse data id failed")
        }
        var outputList: [Sensor] = []
        let allSensors = fetchData()
        for sensor in allSensors {
            if sensor.name == coreDataID {
                outputList.append(sensor)

            }
        }
        
        var parsedList: [CoorType] = []
        
        let formatter = DateFormatter()
        formatter.dateFormat = "yyyy/MM/dd HH:mm"
        
        var lowerBoundX: Date = formatter.date(from: "2000/01/01 01:01")!
        var upperBoundX: Date = formatter.date(from: "2000/01/01 01:01")!
        var time: [Date] = []
        
        var greatestValue: Double = 22
        var leastValue: Double = 21
        

        for sensor in outputList {
            var coordinate = CoorType(x: Date(), y: 0)
            switch sensor.name {
            case "bTemp":
                coordinate.y = sensor.bTemp
            case "cTemp":
                coordinate.y = sensor.cTemp
            default:
                print("parse data switch failed")
            }
            
            if coordinate.y > greatestValue {
                greatestValue = coordinate.y
            }
            
            if coordinate.y < leastValue {
                leastValue = coordinate.y
            }
            time.append(sensor.time!)
            coordinate.x = sensor.time!
            parsedList.append(coordinate)
        }
        
        if time.count < 21 && time.count > 1 {
            upperBoundX = time[time.count-1]
            lowerBoundX = time[0]
        }
        else if time.count <= 1 {
            print("no Data")
        }
        else {
            upperBoundX = time[time.count-1]
            lowerBoundX = time[time.count-21]
        }

        
        return (parsedList, greatestValue, leastValue, upperBoundX, lowerBoundX)
    }
    
    func parseAccelerometer(name: String) -> (output: [AccelerometerData], maxValue: Double, minValue: Double, maxTime: Date, minTime: Date) {
        var times: [Date] = []
        var xList: [Double] = []
        var yList: [Double] = []
        var zList: [Double] = []
        var xID = ""
        var yID = ""
        var zID = ""
        
        var aList: [AccelerometerData] = []
        var outputList: [Sensor] = []
        let allSensors = fetchData()
        
        switch name {
        case "Head Movement":
            xID = "hAccelX"
            yID = "hAccelY"
            zID = "hAccelZ"
            for sensor in allSensors {
                if sensor.name == xID {
                    xList.append(sensor.hAccelX)
                    times.append(sensor.time!)
                }
                if sensor.name == yID {
                    yList.append(sensor.hAccelY)

                }
                if sensor.name == zID {
                    zList.append(sensor.hAccelZ)

                }
            }
        case "Body Movement":
            xID = "bAccelX"
            yID = "bAccelY"
            zID = "bAccelZ"
            for sensor in allSensors {
                if sensor.name == xID {
                    xList.append(sensor.bAccelX)
                    times.append(sensor.time!)

                }
                if sensor.name == yID {
                    yList.append(sensor.bAccelY)
                }
                if sensor.name == zID {
                    zList.append(sensor.bAccelZ)
                }
            }
//        case "Head Slumping":
            
        default:
            print("Unrecognized accelerometer ID")
        }

        for index in (0...times.count-1) {
            let accelerometer = AccelerometerData(time: times[index], x: xList[index], y: yList[index], z: zList[index])
            aList.append(accelerometer)
        }
        
        let formatter = DateFormatter()
        formatter.dateFormat = "yyyy/MM/dd HH:mm"
        
        var lowerBoundX: Date = formatter.date(from: "2000/01/01 01:01")!
        var upperBoundX: Date = formatter.date(from: "2000/01/01 01:01")!
        
        var greatestValue: Double = 1
        var leastValue: Double = 0
        
        for accel in aList {
            
            if accel.x > greatestValue {
               greatestValue = accel.x
            }
            if accel.y > greatestValue {
                greatestValue = accel.y
            }
            if accel.z > greatestValue {
                greatestValue = accel.z
            }
            
            if accel.x < leastValue {
               greatestValue = accel.x
            }
            if accel.y < leastValue {
                greatestValue = accel.y
            }
            if accel.z < leastValue {
                greatestValue = accel.z
            }
        }

        if times.count < 21 && times.count > 1 {
            upperBoundX = times[times.count-1]
            lowerBoundX = times[0]
        }
        else if times.count <= 1 {
            print("no Data")
        }
        else {
            upperBoundX = times[times.count-1]
            lowerBoundX = times[times.count-21]
        }
        

        return (aList, greatestValue, leastValue, upperBoundX, lowerBoundX)
    }

}
