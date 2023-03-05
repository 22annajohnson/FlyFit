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
        let header = UIView(frame: CGRect(x: 0, y: 0, width: UIScreen.main.bounds.width, height: 144))
        let label = UILabel(frame: CGRect(x: header.bounds.width*0.05, y: header.bounds.height*0.40, width: 200, height: 34))
        let accountIcon = UIImage(systemName: "person.crop.circle.fill")
        let accountView = UIImageView(frame: CGRect(x: header.bounds.width*0.85, y: header.bounds.height*0.40, width: 34.85, height: 34.85))
        let accountBackgroundView = UIView(frame: CGRect(x: (header.bounds.width*0.85)+4, y: (header.bounds.height*0.40)+3, width: 28, height: 28))
        
        header.backgroundColor = Style().secondaryBackgroundColor
        
        label.text = title
        label.font = Style().headingFont
        label.textColor = Style().primaryTextColor
        
        accountView.image = accountIcon
        accountView.tintColor = Style().accountBackgroundColor
        accountView.layer.cornerRadius = 34.85/2
        
        accountBackgroundView.backgroundColor = Style().primaryTextColor
        accountBackgroundView.layer.cornerRadius = 28/2
        
        
        header.addSubview(label)
        header.addSubview(accountBackgroundView)
        header.addSubview(accountView)
        
        return header
    }
}
