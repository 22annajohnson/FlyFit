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
    static let service = "C9BBF76C-ACFA-36A9-E4BD-567D73F10AFD"
    static let tx = "825B7502-2280-E5CA-C71B-49010282FFC4"
    static let rx = "825B7503-2280-E5CA-C71B-49010282FFC4"

    // Converted UUID strings to CBUUID
    static let BLEService_UUID = CBUUID(string: service)
    static let BLE_Characteristic_uuid_Tx = CBUUID(string: tx)//(Property = Write without response)
    static let BLE_Characteristic_uuid_Rx = CBUUID(string: rx)//(Property = Read/Notify)

}
