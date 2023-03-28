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
    var x: Double
    var y: Date
}

class DataController: ObservableObject {
    
    let viewContext = (UIApplication.shared.delegate as! AppDelegate).persistentContainer.viewContext
    let container = NSPersistentContainer(name: "FlyFit")
    var sensorData = [Sensor]()
    
//    Initializes container
    init() {
        container.loadPersistentStores { description, error in
            if let error = error {
                print("CoreData failed to load: \(error.localizedDescription)")
            }
        }
    }
    
//    Creates an object to add data points
    func add<T: NSManagedObject>(_type: T.Type) -> T? {
        guard let entityName = T.entity().name else { return nil}
        guard let entity = NSEntityDescription.entity(forEntityName: entityName , in: viewContext) else { return nil }
        let object = T(entity: entity, insertInto: viewContext)
        return object
    }
    
//    Saves data to CoreData
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
        var outputList: [Sensor] = []
        var allSensors = fetchData()
        for sensor in allSensors {
            if sensor.name == id {
                outputList.append(sensor)
            }
        }
        
        var parsedList: [CoorType] = []
        for sensor in outputList {
            var coordinate = CoorType(x: 0, y: Date())
            switch sensor.name {
            case "bTemp":
                coordinate.x = sensor.bTemp
            case "cTemp":
                coordinate.x = sensor.cTemp
            case "bAccelX":
                coordinate.x = sensor.bAccelX
            case "bAccelY":
                coordinate.x = sensor.bAccelY
            case "bAccelZ":
                coordinate.x = sensor.bAccelZ
            case "hAccelX":
                coordinate.x = sensor.hAccelX
            case "hAccelY":
                coordinate.x = sensor.hAccelY
            case "hAccelZ":
                coordinate.x = sensor.hAccelZ
            default:
                print("parse data switch failed")
            }
            coordinate.y = sensor.time!
            parsedList.append(coordinate)
        }
        
        return parsedList
    }
}
