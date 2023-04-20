//  SensorView.swift
//  FlyFit
//
//  Created by Jacob  Loranger on 3/27/23.
//

import SwiftUI
import CoreData
import Charts
import UIKit

struct SensorView: View {
    var dataControl = DataController()
    @State var allData: ([CoorType], Double, Double, Date, Date, Double) = ([], 50, 0, Calendar.current.date(byAdding: .hour, value: 1, to: Date())!, Date(), 0
)
    var name: String?
    let timer = Timer.publish(every: 1, on: .main, in: .common).autoconnect()


    init(name: String) {
        self.name = name
        self.allData = dataControl.parseData(id: self.name!)
        print("Sensor")

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
//            .animation(.easeIn(duration: 0.8))
            .chartYScale(domain: (allData.2*0.9)...(allData.1*1.1))
            .chartXScale(domain: (allData.4)...(allData.3))
            .chartYAxis{
                AxisMarks(preset: .automatic, position: .automatic)
            }
            .chartXAxis{
                AxisMarks(preset: .automatic, position: .automatic)
                
            }
            .onReceive(timer) { _ in
                allData = dataControl.parseData(id: self.name!)
            }
            .chartXAxisLabel(position: .bottom, alignment: .center) {
                Text("Time")
            }
            .chartYAxisLabel(position: .trailing, alignment: .center) {
                Text("Celsius")
            }
            
        }
        .frame(width: UIScreen.main.bounds.width*0.95, height: 350)
        
        
        GroupBox("Statistics") {
            VStack{
                HStack{
                    RoundedRectangle(cornerRadius: 20)
                        .fill(Color(Style().secondaryBackgroundColor))
                        .overlay(
                            Text("Moving Average:")
                                .position(CGPoint(x: 75, y: 20))
                        )
                        .overlay(
                            Text(String(allData.5))
                                .position(CGPoint(x: 75, y: 50))
                            
                        )
                        
                    RoundedRectangle(cornerRadius: 20)
                        .fill(Color(Style().secondaryBackgroundColor))
                        .overlay(
                            Text("Max:")
                                .position(CGPoint(x: 75, y: 20))
                        )
                        .overlay(
                            Text(String(allData.1))
                                .position(CGPoint(x: 75, y: 50))
                            
                        )
                }
                HStack{
                    RoundedRectangle(cornerRadius: 20)
                        .fill(Color(Style().secondaryBackgroundColor))
                        .overlay(
                            Text("Healthy Range:")
                                .position(CGPoint(x: 75, y: 20))
                                
                        )
                        .overlay(
                            Text("36.1 - 37.2 ℃")
                            
                        )
                    RoundedRectangle(cornerRadius: 20)
                        .fill(Color(Style().secondaryBackgroundColor))
                        .overlay(
                            Text("Min:")
                                .position(CGPoint(x: 75, y: 20))
                        )
                        .overlay(
                            Text(String(allData.2))
                                .position(CGPoint(x: 75, y: 50))
                            
                        )
                }
            }
            
            
            
        }
        .frame(width: UIScreen.main.bounds.width*0.95, height: 250)
    }
    
    
}

struct SensorView_Previews: PreviewProvider {
    static var previews: some View {
        SensorView(name: "")
    }
}
