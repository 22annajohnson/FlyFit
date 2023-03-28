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
    var result: [CoorType]
    var name: String?

    
    init(name: String) {
        self.name = name
        result = dataControl.parseData(id: self.name!)
        print(self.name)
        print(result)
    }
    
    var body: some View {
        GroupBox (name!) {
            Chart {
                ForEach(result, id: \.y) { item in
                    LineMark(
                        x: .value("Time", item.x),
                        y: .value("Temp", item.y)
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
        SensorView(name: "")
    }
}
