//
//  MetricTypes.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/13/23.
//

import Foundation
import UIKit

struct MetricTypes {
    
    //MARK: Vitals
    
    static let BodyTemp = MetricStyle(image: UIImage(systemName: "medical.thermometer")!, title: "Body Temperature", size: CGSize(width: UIScreen.main.bounds.width*0.14, height: UIScreen.main.bounds.width*0.14))
    
    static let HeartRate = MetricStyle(image: UIImage(systemName: "heart")!, title: "Heart Rate", size: CGSize(width: UIScreen.main.bounds.width*0.12, height: UIScreen.main.bounds.width*0.12))
    
    static let BreathingRate = MetricStyle(image: UIImage(systemName: "lungs")!, title: "Breathing Rate", size: CGSize(width: UIScreen.main.bounds.width*0.14, height: UIScreen.main.bounds.width*0.14))
    
    //MARK: Environmental

    static let CabinTemperature = MetricStyle(image: UIImage(systemName: "medical.thermometer")!, title: "Cabin Temperature", size: CGSize(width: UIScreen.main.bounds.width*0.14, height: UIScreen.main.bounds.width*0.14))
    
    static let CarbonMonoxide = MetricStyle(image: UIImage(systemName: "gauge.high")!, title: "Carbon Monoxide", size: CGSize(width: UIScreen.main.bounds.width*0.14, height: UIScreen.main.bounds.width*0.14))
    
    static let Smoke = MetricStyle(image: UIImage(systemName: "smoke")!, title: "Smoke", size: CGSize(width: UIScreen.main.bounds.width*0.14, height: UIScreen.main.bounds.width*0.14))
    
}
