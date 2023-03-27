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
    func parseData(allSensors: [Sensor], id: String) -> [Sensor] {
        var outputList: [Sensor] = []
        
        for sensor in allSensors {
            if sensor.name == id {
                outputList.append(sensor)
            }
        }
        
        return outputList
    }
}
