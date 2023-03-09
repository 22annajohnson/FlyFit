//
//  MainTabBarViewController.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/2/23.
//

import UIKit

class MainTabBarViewController: UITabBarController {

    override func viewDidLoad() {
        super.viewDidLoad()
        self.tabBar.frame = CGRect(x: 0, y: view.bounds.height*0.9111, width: view.bounds.width, height: view.bounds.height*0.0889)
        
        let vc1 = UINavigationController(rootViewController: HomeViewController())
        let vc2 = UINavigationController(rootViewController: StatusViewController())
        let vc3 = UINavigationController(rootViewController: FlightLogsViewController())
        let vc4 = UINavigationController(rootViewController: NavigationViewController())


        vc1.tabBarItem.image = UIImage(systemName: "house.fill")
        vc2.tabBarItem.image = UIImage(systemName: "stethoscope")
        vc3.tabBarItem.image = UIImage(systemName: "airplane")
        vc4.tabBarItem.image = UIImage(systemName: "map.fill")
        
        
        tabBar.tintColor = Style().primaryTextColor
        tabBar.backgroundColor = Style().secondaryBackgroundColor
        tabBar.barTintColor = Style().primaryTextColor

        
        setViewControllers([vc1, vc2, vc3, vc4], animated: true)
        
        
        
    }

}
