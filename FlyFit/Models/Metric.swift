//
//  Metric.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/13/23.
//

import UIKit

struct MetricStyle {
    var image: UIImage
    var title: String
    var size: CGSize
}

struct Metric {
    var sensorType: MetricStyle
    var indicator: String
}
