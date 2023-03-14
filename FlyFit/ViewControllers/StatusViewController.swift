//
//  StatusViewController.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/3/23.
//

import UIKit
import BetterSegmentedControl

class StatusViewController: UIViewController {
    
    var metrics: [Metric] = []
    var tableView: UITableView!
    
    override var preferredStatusBarStyle: UIStatusBarStyle {
        return .lightContent
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()

        metrics = fetchData(group: "vital")
        view.backgroundColor = Style().primaryBackgroundColor

        let header = AddElements().addHeader(title: "Status")
        let background = AddElements().addBackground()
        let slider = AddElements().addSlider(frame: CGRect(x: view.bounds.width*0.0923, y: view.bounds.height*0.1505, width: view.bounds.width*0.8154, height: view.bounds.height*0.0403))
        
        view.addSubview(header)
        view.addSubview(background)
        view.addSubview(slider)
        
        addMetricsTable()

    }
    
    // MARK: - Action handlers
    @objc func changeDataSet(_ sender: BetterSegmentedControl) {
        if sender.index == 0 {
            metrics = fetchData(group: "vital")
            self.tableView.reloadData()

        } else {
            metrics = fetchData(group: "environmental")
            self.tableView.reloadData()

        }
    }
    
    func addMetricsTable() {

        tableView = UITableView(frame: CGRect(x: view.bounds.width*0.092, y: view.bounds.height*0.232-20, width: view.bounds.width*0.815, height: view.bounds.height*0.640))
        tableView.backgroundColor = .clear
        
        tableView.delegate = self
        tableView.dataSource = self
        tableView.register(MetricsTableViewCell.self, forCellReuseIdentifier: "cell")

        view.addSubview(tableView)
    }

}

extension StatusViewController: UITableViewDelegate, UITableViewDataSource {
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return metrics.count
    }
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let metric = metrics[indexPath.section]
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell") as! MetricsTableViewCell
        
        cell.setup(metrics: metric)
        cell.backgroundColor = Style().secondaryBackgroundColor
        cell.layer.cornerRadius = 20
        
        return cell
    }
    func tableView(_ tableView: UITableView, titleForHeaderInSection section: Int) -> String? {
        return " "
    }
    func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return view.bounds.height*0.132
    }
    
    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 0
    }
    
    func tableView(_ tableView: UITableView, didHighlightRowAt indexPath: IndexPath) {
        
        //        Connecting UIKit table cells to SwiftUI controller (HeartRateView)
        //        To Do: Change SwiftUI controller based on table cell section index
        let metric = metrics[indexPath.section]

//        let swiftUIController = UIHostingController(rootView: SensorView(title: health.title, indicator: health.indicator))
//        navigationController?.pushViewController(swiftUIController, animated: true)
        
    }
}

extension StatusViewController {
    //TODO: either make this a real function to grab the data or make one in the DataCotnroller
    func fetchData(group: String) -> [Metric] {
        if group == "vital" {
            let metric1 = Metric(sensorType: MetricTypes.BodyTemp, indicator: "urgent")
            let metric2 = Metric(sensorType: MetricTypes.BreathingRate, indicator: "warning")
            let metric3 = Metric(sensorType: MetricTypes.HeartRate, indicator: "healthy")
            return [metric1, metric2, metric3]
        }
        else if group == "environmental" {
            let metric1 = Metric(sensorType: MetricTypes.CabinTemperature, indicator: "healthy")
            let metric2 = Metric(sensorType: MetricTypes.CarbonMonoxide, indicator: "warning")
            let metric3 = Metric(sensorType: MetricTypes.Smoke, indicator: "healthy")
            return [metric1, metric2, metric3]
        }
        

        return []
    }
}
