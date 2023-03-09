//
//  NavigationViewController.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/9/23.
//

import UIKit

class NavigationViewController: UIViewController {

    override var preferredStatusBarStyle: UIStatusBarStyle {
        return .lightContent
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()

        view.backgroundColor = Style().primaryBackgroundColor
        
        let header = AddElements().addHeader(title: "Navigation")
        view.addSubview(header)
        
    }

}
