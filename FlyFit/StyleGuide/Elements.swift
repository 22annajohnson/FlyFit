//
//  Elements.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/3/23.
//

import Foundation
import UIKit

class AddElements: ObservableObject {
    
    init() {
        
    }
    
    func addHeader(title: String) -> UIView {
        let header = UIView()
        let label = UILabel()
        let accountIcon = UIImage(systemName: "person.crop.circle.fill")
        let accountView = UIImageView()
        
        header.frame = CGRect(x: 0, y: 0, width: UIScreen.main.bounds.width, height: 144)
        header.backgroundColor = Style().secondaryBackgroundColor
        
        label.text = title
        label.frame = CGRect(x: header.bounds.width*0.05, y: header.bounds.height*0.40, width: 200, height: 34)
        label.font = Style().headingFont
        label.textColor = Style().primaryTextColor
        
        accountView.frame = CGRect(x: header.bounds.width*0.85, y: header.bounds.height*0.40, width: 38.45, height: 38.45)
        accountView.image = accountIcon
        accountView.tintColor = Style().primaryTextColor
        
        
        header.addSubview(label)
        header.addSubview(accountView)
        
        return header
    }
}
