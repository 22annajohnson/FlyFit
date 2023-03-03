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
        view.backgroundColor = .systemBackground
        
        let vc1 = UINavigationController(rootViewController: HomeViewController())
        let vc2 = UINavigationController(rootViewController: StatusViewController())

        vc1.tabBarItem.image = UIImage(systemName: "house")
        vc2.tabBarItem.image = UIImage(systemName: "stethoscope")
        
        
        tabBar.tintColor = UIColor(red: 0/255, green: 85/255, blue: 187/255, alpha: 1)
        tabBar.backgroundColor = .white
        tabBar.barTintColor = UIColor(red: 200/255, green: 200/255, blue: 200/255, alpha: 1)

        
        setViewControllers([vc1, vc2], animated: true)
        // Do any additional setup after loading the view.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
