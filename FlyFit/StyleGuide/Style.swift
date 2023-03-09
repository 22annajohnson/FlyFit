//
//  Style.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/3/23.
//

import Foundation
import UIKit
import MapboxMaps

struct Style {
    var primaryBackgroundColor = UIColor(red: 29/255, green: 38/255, blue: 37/255, alpha: 1)
    var secondaryBackgroundColor = UIColor(red: 58/255, green: 81/255, blue: 84/255, alpha: 1)
    var primaryTextColor = UIColor(red: 229/255, green: 239/255, blue: 249/255, alpha: 1)
    var accountBackgroundColor = UIColor(red: 146/255, green: 154/255, blue: 162/255, alpha: 1)
    var urgentColor = UIColor(red: 196/255, green: 30/255, blue: 30/255, alpha: 1)
    var warningColor = UIColor(red: 195/255, green: 80/255, blue: 30/255, alpha: 1)
    var accentColor = UIColor(red: 80/255, green: 149/255, blue: 158/255, alpha: 1)
    var healthyColor = UIColor(red: 94/255, green: 160/255, blue: 131/255, alpha: 1)
    
    var headingFont = UIFont(name: "Inter-Regular_Bold", size: 28)
    var subheadingFont = UIFont(name: "Inter-Regular_SemiBold", size: 20)
    var buttonFont = UIFont(name: "Inter-Regular_SemiBold", size: 24)
    var alertFont = UIFont(name: "Inter-Regular_Bold", size: 20)
    var textFont = UIFont(name: "Inter-Regular_SemiBold", size: 16)
    
    var mapBoxStyle = StyleURI(rawValue: "mapbox://styles/annajohnson22/clevrxn09004r01n38xg7vten")
}


//for family in UIFont.familyNames {
//  let sName: String = family as String
//  print("family: \(sName)")
//
//    for name in UIFont.fontNames(forFamilyName: sName) {
//    print("name: \(name as String)")
//  }
//}
