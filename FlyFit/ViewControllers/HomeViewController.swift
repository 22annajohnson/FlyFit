//
//  HomeViewController.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/2/23.
//


import UIKit

class HomeViewController: UIViewController {
    
    override var preferredStatusBarStyle: UIStatusBarStyle {
        return .lightContent
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()

        view.backgroundColor = Style().primaryBackgroundColor
        
        let header = AddElements().addHeader(title: "Summary")
        view.addSubview(header)
        
    }
    




}

