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
    func parseData(id: String) -> [CoorType] {
        print("parse")
        var coreDataID: String = ""
        switch id {
        case "Body Temperature":
            coreDataID = "bTemp"
        case "Cabin Temperature":
            coreDataID = "cTemp"
//        case "Motion":
//            parseAccelerometer(name: id)
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
        for sensor in outputList {
            var coordinate = CoorType(x: Date(), y: 0)
            print(sensor.name)
            switch sensor.name {
            case "bTemp":
                coordinate.y = sensor.bTemp
            case "cTemp":
                coordinate.y = sensor.cTemp
            default:
                print("parse data switch failed")
            }
            coordinate.x = sensor.time!
            parsedList.append(coordinate)
        }
        
        return parsedList
    }
    
//    func parseAccelerometer(name: String) -> [AccelerometerData] {
//        var times = []
//        var xList = []
//        var yList = []
//        var zList = []
//        var xID = ""
//        var yID = ""
//        var zID = ""
//
//        switch name {
//        case "Motion":
//            xID = "bAccelX"
//            yID = "bAccelY"
//            zID = "bAccelZ"
//        }
//
//        let allSensors = fetchData()
//
//        for sensor in allSensors {
//            if sensor.name == coreDataID {
//                outputList.append(sensor)
//            }
//        }
//
//        return
//    }
}
