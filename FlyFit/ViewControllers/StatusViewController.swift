//
//  StatusViewController.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/3/23.
//

import UIKit

class StatusViewController: UIViewController {
    
    override var preferredStatusBarStyle: UIStatusBarStyle {
        return .lightContent
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()

        view.backgroundColor = Style().primaryBackgroundColor
        
        let header = AddElements().addHeader(title: "Status")
        view.addSubview(header)
        //test 2
        
    }

}
