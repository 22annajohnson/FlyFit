//
//  SensorView.swift
//  FlyFit
//
//  Created by Jacob  Loranger on 3/27/23.
//

import SwiftUI
import CoreData
import Charts

struct SensorView: View {
    var dataControl = DataController()
    var data = [Sensor]()
    
    init() {
        data = dataControl.fetchData()
    }
    
    var body: some View {
        GroupBox ("Sensor Name") {
            Chart {
                ForEach(data) { item in
                    LineMark(
                        x: .value("Time", item.time!),
                        y: .value("Temp", item.bTemp)
                    )
                    .interpolationMethod(.catmullRom)
                }
            }
            .chartYAxis{
                AxisMarks(preset: .automatic, position: .automatic)
            }
            .chartXAxis{
                AxisMarks(preset: .automatic, position: .automatic)
            }
        }
    }
}

struct SensorView_Previews: PreviewProvider {
    static var previews: some View {
        SensorView()
    }
}
