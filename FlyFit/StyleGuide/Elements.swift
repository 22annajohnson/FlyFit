//
//  Elements.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/3/23.
//

import Foundation
import UIKit
import MapboxMaps
import BetterSegmentedControl

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
    
    func addBackground() -> UIView {
        let background = UIView(frame: CGRect(x: 0, y: UIScreen.main.bounds.height*0.1256, width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.height*0.7855))
        background.backgroundColor = Style().primaryBackgroundColor
        background.layer.cornerRadius =  25
        background.layer.maskedCorners = [.layerMinXMinYCorner]
        return background
    }
    
    func addMap(frame: CGRect) -> UIView {
        let view = UIView(frame: frame)
        let token: String = "sk.eyJ1IjoiYW5uYWpvaG5zb24yMiIsImEiOiJjbGV5bmE3d2YwbHB2M3NwNWl5dm0wMnIxIn0.k9ZlCSeJpjZ4EpqnMb7GSQ"
        
        let resourceOptions = ResourceOptions(accessToken: token)
        let mapInitOptions = MapInitOptions(resourceOptions: resourceOptions, styleURI: Style().mapBoxStyle)
        let map = MapView(frame: view.bounds, mapInitOptions: mapInitOptions)
        map.autoresizingMask = [.flexibleWidth, .flexibleHeight]
        
        view.addSubview(map)
        let corner = AddElements().addCorner()
        view.addSubview(corner)
        return view
    }
    
    func addCorner() -> UIView {
        let view = UIView(frame: CGRect(x: 0, y: 0, width: 25, height: 25))
        let shapeLayer = CAShapeLayer()
        shapeLayer.frame = view.bounds
        shapeLayer.lineWidth = 1.0
        shapeLayer.fillColor = Style().secondaryBackgroundColor.cgColor
        view.layer.addSublayer(shapeLayer)
        let path = UIBezierPath()

        path.move(to: CGPoint(x: 0, y: 25))
        path.addQuadCurve(to: CGPoint(x: 25, y: 0), controlPoint: CGPoint(x: 0, y: 0))
        path.addLine(to: CGPoint(x: 0, y: -1))
        path.addLine(to: CGPoint(x: 0, y: 25))
        path.close()
        shapeLayer.path = path.cgPath

        return view
    }
    
    func addSlider(frame: CGRect) -> UIView{
        let view = UIView(frame: frame)
        let slider = BetterSegmentedControl.appleStyled(frame: view.bounds, titles: ["Vitals", "Environmental"])
        
        slider.segments = LabelSegment.segments(withTitles: ["Vitals", "Environmental"],
                                                normalFont: Style().textFont, normalTextColor: Style().primaryTextColor,
                                                selectedFont: Style().textFont,
                                                selectedTextColor: Style().primaryTextColor)
        slider.backgroundColor = Style().secondaryOpacityColor
        slider.indicatorViewBackgroundColor = Style().sliderColor
        slider.addTarget(self, action: #selector(StatusViewController.changeDataSet(_:)),
                         for: .valueChanged)
      
        
        view.addSubview(slider)
        return view
    }
}
