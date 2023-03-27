////
//  TestingViewController.swift
//  FlyFit
//
//  Created by Jacob  Loranger on 3/21/23.
//

import Foundation
import UIKit

class TestingViewController: UIViewController {
    
    var tempData = [Sensor]()
    var tableView: UITableView!
    let context = (UIApplication.shared.delegate as! AppDelegate).persistentContainer.viewContext
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        addElements()

    }
    
    func addElements() {
        tableView = UITableView(frame: CGRect(x: 0, y: 200, width: view.bounds.width, height: view.bounds.height-100))
        tableView.dataSource = self
        tableView.delegate = self
        self.tableView.register(UITableViewCell.self, forCellReuseIdentifier: "cell")
        view.addSubview(tableView)

        let button = UIButton(frame: CGRect(x: 0, y: 50, width: 100, height: 100))
        button.setTitle("Refresh", for: .normal)
        button.backgroundColor = Style().secondaryBackgroundColor
        button.addTarget(self, action: #selector(refreshData), for: .touchUpInside)
        view.addSubview(button)
        
        let DeleteButton = UIButton(frame: CGRect(x: view.bounds.width*0.5, y: 50, width: 100, height: 100))
        DeleteButton.setTitle("Delete", for: .normal)
        DeleteButton.backgroundColor = Style().secondaryBackgroundColor
        DeleteButton.addTarget(self, action: #selector(deleteData), for: .touchUpInside)
        view.addSubview(DeleteButton)

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
    @objc func refreshData() {
        tempData = fetch()
        self.tableView.reloadData()
    }
    
    //    Adds button that deletes data
    @objc func deleteData() {
        deleteCoreData()
        tempData = fetch()
        self.tableView.reloadData()
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
    
}
//     Display data in a UIViewTable
extension TestingViewController: UITableViewDelegate, UITableViewDataSource {
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
//        return 10
        return tempData.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath)

        let dataPoints = tempData[indexPath.row]
        var containedData: Double = -1
        
        switch dataPoints.name {
        case "bTemp":
            containedData = dataPoints.bTemp
        case "cTemp":
            containedData = dataPoints.cTemp
        case "bAccelX":
            containedData = dataPoints.bAccelX
        case "bAccelY":
            containedData = dataPoints.bAccelY
        case "bAccelZ":
            containedData = dataPoints.bAccelZ
        case "hAccelX":
            containedData = dataPoints.hAccelX
        case "hAccelY":
            containedData = dataPoints.hAccelY
        case "hAccelZ":
            containedData = dataPoints.hAccelZ
        default:
            print("Failed Cell")
        }
        
        cell.textLabel?.text = String(containedData)

        let dateFormatter = DateFormatter()
          dateFormatter.dateFormat = "MMMM d yyyy, hh:mm:ss"
        
        return cell
    }

}

