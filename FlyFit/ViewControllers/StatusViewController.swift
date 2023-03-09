//
//  StatusViewController.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/3/23.
//

import UIKit
import BetterSegmentedControl

class StatusViewController: UIViewController {
    
    override var preferredStatusBarStyle: UIStatusBarStyle {
        return .lightContent
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()

        view.backgroundColor = Style().primaryBackgroundColor
        
        let header = AddElements().addHeader(title: "Status")
        view.addSubview(header)
        
        let background = UIView(frame: CGRect(x: 0, y: view.bounds.height*0.1256, width: view.bounds.width, height: view.bounds.height*0.7855))
        background.backgroundColor = Style().primaryBackgroundColor
        background.layer.cornerRadius =  25
        background.layer.maskedCorners = [.layerMinXMinYCorner]
        view.addSubview(background)
        
        let slider = AddElements().addSlider(frame: CGRect(x: view.bounds.width*0.0923, y: view.bounds.height*0.1505, width: view.bounds.width*0.8154, height: view.bounds.height*0.0403))
        view.addSubview(slider)

    }
    
    // MARK: - Action handlers
    @objc func navigationSegmentedControlValueChanged(_ sender: BetterSegmentedControl) {
        if sender.index == 0 {
            print("Turning lights on.")
        } else {
            print("Turning lights off.")
        }
    }

}
