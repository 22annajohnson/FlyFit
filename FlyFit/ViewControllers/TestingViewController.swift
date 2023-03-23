//
//  TestingViewController.swift
//  FlyFit
//
//  Created by Jacob  Loranger on 3/21/23.
//

import Foundation
import UIKit

class TestingViewController: UIViewController, UITableViewDataSource, ObservableObject {
    
    var tempData = [Sensor]()
    var dataTableView: UITableView!
    let context = (UIApplication.shared.delegate as! AppDelegate).persistentContainer.viewContext
    
    override func viewDidLoad() {
        super.viewDidLoad()
        dataTableView = UITableView(frame: CGRect(x: 10, y: 200, width: view.bounds.width, height: 600))
        dataTableView.dataSource = self
        
        view.addSubview(dataTableView)
    }
    
    func fetch() -> [Sensor] {
        do {
            tempData = try context.fetch(Sensor.fetchRequest())
        } catch {
            print("couldnt fetch")
        }
        return tempData
    }
    
    
//    Adds button that updates data
    func refreshData(_ sender: Any) {
        tempData = fetch()
        self.dataTableView.reloadData()
    }
    
//    Adds button that deletes data
    func deleteData(_ sender: Any) {
        deleteCoreData()
        tempData = fetch()
        self.dataTableView.reloadData()
    }
    
    
//     Create a function to delete data for testing
    func deleteCoreData() {
        do {
            tempData = try context.fetch(Sensor.fetchRequest())
            for i in 0...tempData.count-1 {
                self.context.delete(tempData[i] as Sensor)
            }
            do {
                try self.context.save()
            }
            catch {
            }
            tempData = fetch()
        }
        catch {
        }
    }
    
    
//     Display data in a UIViewTable
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return tempData.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = tableView.dequeueReusableCell(withIdentifier: "Cell", for: indexPath)
        
        let dataPoints = tempData[indexPath.row]
        
//        dataPoint.temp = Int64(tempPoint)
        
        let tempData = dataPoints.bTemp
        let tempDataString = String(tempData)
        cell.textLabel?.text = tempDataString as! String
        
        let tempDate = dataPoints.time as! Date
        let dateFormatter = DateFormatter()
          dateFormatter.dateFormat = "MMMM d yyyy, hh:mm:ss"
        
        cell.detailTextLabel?.text = dateFormatter.string(from: tempDate)
        
        return cell
    }
}

