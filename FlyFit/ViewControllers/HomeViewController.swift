//
//  HomeViewController.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/2/23.
//


import UIKit
import MapboxMaps

class HomeViewController: UIViewController {
    internal var mapView: UIView!

    override var preferredStatusBarStyle: UIStatusBarStyle {
        return .lightContent
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = Style().primaryBackgroundColor
        
        let header = AddElements().addHeader(title: "Summary")
        mapView = AddElements().addMap(frame: CGRect(x: 0, y: view.bounds.height*0.125, width: view.bounds.width, height: view.bounds.height*0.69))
        
        view.addSubview(header)
        view.addSubview(mapView)
        
        view.addSubview(FastStatsView().startFlightView(frame: CGRect(x: 0, y: view.bounds.height*0.777, width: view.bounds.width, height: view.bounds.height*0.14)))
    }
}

