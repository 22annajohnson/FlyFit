//
//  CBUUIDs.swift
//  FlyFit
//
//  Created by Jacob  Loranger on 3/9/23.
//

import Foundation
import CoreBluetooth

struct CBUUIDs {
    // UUID Strings
    static let service = "825B7501-2280-E5CA-C71B-49010282FFC4"
    static let tx = "AE16BCEC-C712-65A2-F0C6-3EDD867FB437"
    static let rx = "825B7503-2280-E5CA-C71B-49010282FFC4"

    // Converted UUID strings to CBUUID
    static let BLEService_UUID = CBUUID(string: service)
    static let BLE_Characteristic_uuid_Tx = CBUUID(string: tx)//(Property = Write without response)
    static let BLE_Characteristic_uuid_Rx = CBUUID(string: rx)//(Property = Read/Notify)

}
