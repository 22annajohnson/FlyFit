//
//  BLEParser.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/25/23.
//

import Foundation

struct BLEParser() {
    func parse(dataPoint: String) {
        var splitData = dataPoint.split(separator: ":")
        let id = splitData[0]
        
        switch id:
        case "bodyTemp"
    }
}
