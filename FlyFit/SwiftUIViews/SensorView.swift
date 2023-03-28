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
    @State var allData: ([CoorType], Double, Double, Date, Date) = ([], 50, 0, Date(), Date())
    var name: String?
    let timer = Timer.publish(every: 0.5, on: .main, in: .common).autoconnect()


    init(name: String) {
        self.name = name
        allData = dataControl.parseData(id: self.name!)
        print(allData.2*0.9)
        print(allData.1*1.1)
    }

    var body: some View {
        GroupBox (name!) {
            Chart {
                ForEach(allData.0, id: \.y) { item in
                    LineMark(
                        x: .value("Time", item.x),
                        y: .value("Temp", item.y)
                    )
                    .interpolationMethod(.catmullRom)
                }

            }
            .chartYScale(domain: (allData.2*0.9)...(allData.1*1.1))
            .chartXScale(domain: (allData.4) ... (allData.3))
            .chartYAxis{
                AxisMarks(preset: .automatic, position: .automatic)
            }
            .chartXAxis{
                AxisMarks(preset: .automatic, position: .automatic)
            }
            .onReceive(timer) { _ in
                allData = dataControl.parseData(id: self.name!)
            }
        }
    }
}

struct SensorView_Previews: PreviewProvider {
    static var previews: some View {
        SensorView(name: "")
    }
}
