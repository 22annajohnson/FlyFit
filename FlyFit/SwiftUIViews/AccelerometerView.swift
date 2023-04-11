//  AccelerometerView.swift
//  FlyFit
//
//  Created by Anna Johnson on 03/28/23.
//

import SwiftUI
import CoreData
import Charts

struct AccelerometerView: View {
    var dataControl = DataController()
    @State var allData: ([AccelerometerData], Double, Double, Date, Date) = ([], 50, 0, Calendar.current.date(byAdding: .hour, value: 1, to: Date())!, Date()
    )
    var name: String?
    let timer = Timer.publish(every: 0.5, on: .main, in: .common).autoconnect()


    init(name: String) {
        self.name = name
        allData = dataControl.parseAccelerometer(name: self.name!)

    }

    var body: some View {
        GroupBox (name!) {
            Chart {
                ForEach(allData.0, id: \.x) { item in
                    LineMark(
                        x: .value("Time", item.time),
                        y: .value("X", item.x),
                        series: .value("x", "A")
                    )
                    .interpolationMethod(.catmullRom)
                    .foregroundStyle(.red)
                }
                ForEach(allData.0, id: \.y) { item in
                    LineMark(
                        x: .value("Time", item.time),
                        y: .value("Y", item.y),
                        series: .value("y", "B")
                    )
                    .interpolationMethod(.catmullRom)
                    .foregroundStyle(.yellow)
                }
                ForEach(allData.0, id: \.z) { item in
                    LineMark(
                        x: .value("Time", item.time),
                        y: .value("Z", item.z),
                        series: .value("z", "C")
                    )
                    .interpolationMethod(.catmullRom)
                    .foregroundStyle(.purple)
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
                allData = dataControl.parseAccelerometer(name: self.name!)
            }
            .chartXAxisLabel(position: .bottom, alignment: .center) {
                Text("Time")
            }
            .chartYAxisLabel(position: .trailing, alignment: .center) {
                Text(name!)
            }
        }
        .frame(width: UIScreen.main.bounds.width, height: 400)
    }
}

struct AccelerometerView_Previews: PreviewProvider {
    static var previews: some View {
        AccelerometerView(name: "")
    }
}
