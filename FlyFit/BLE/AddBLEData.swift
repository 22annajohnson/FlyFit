//
//  AddBLEData.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/27/23.
//

import Foundation
import SwiftUI

class AddBLEData: ObservableObject {
    
    init() {
        
    }
    
    func parseBLE(rawData: String) {
        
        let database = DataController()
        
        let id = rawData.split(separator: ":")[0]
        let value = Double(rawData.split(separator: ":")[1].trimmingCharacters(in: .whitespacesAndNewlines))
        
        guard let dataPoint = database.add(_type: Sensor.self) else { return }
        dataPoint.time = Date()
        dataPoint.name = String(id)
        print(id)
        switch id {
        case "bTemp":
            dataPoint.bTemp = value!
        case "cTemp":
            dataPoint.cTemp = value!
        case "bAccelX":
            dataPoint.bAccelX = value!
        case "bAccelY":
            dataPoint.bAccelY = value!
        case "bAccelZ":
            dataPoint.bAccelZ = value!
        case "hAccelX":
            dataPoint.hAccelX = value!
        case "hAccelY":
            dataPoint.hAccelY = value!
        case "hAccelZ":
            dataPoint.hAccelZ = value!
        default:
            print("failed")
        }
        
        database.save()
    }
}

