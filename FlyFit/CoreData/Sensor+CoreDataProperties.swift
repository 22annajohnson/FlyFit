//
//  Sensor+CoreDataProperties.swift
//  FlyFit
//
//  Created by Jacob  Loranger on 3/3/23.
//
//

import Foundation
import CoreData


extension Sensor {

    @nonobjc public class func fetchRequest() -> NSFetchRequest<Sensor> {
        return NSFetchRequest<Sensor>(entityName: "Sensor")
    }

    @NSManaged public var time: Date?
    @NSManaged public var hAccelX: Double
    @NSManaged public var bAccelX: Double
    @NSManaged public var bTemp: Double
    @NSManaged public var cTemp: Double
    @NSManaged public var cO: Double
    @NSManaged public var bPM: Double
    @NSManaged public var bAccelY: Double
    @NSManaged public var bAccelZ: Double
    @NSManaged public var hAccelY: Double
    @NSManaged public var hAccelZ: Double
    @NSManaged public var name: String?

}

extension Sensor : Identifiable {

}
