//
//  FastStatsView.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/9/23.
//

import UIKit

class FastStatsView: UIView {
    
    override init(frame: CGRect) {
        super .init(frame: frame)

    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func startFlightView(frame: CGRect) -> UIView {
        let view = UIView(frame: frame)
        view.backgroundColor = Style().primaryBackgroundColor
        
        
        let button = UIButton(frame: CGRect(x: frame.width*0.133, y: frame.height*0.269, width: frame.width*0.731, height: frame.height*0.521))
        button.backgroundColor = Style().accentColor
        button.layer.cornerRadius = 15
        button.setTitle("Start Flight", for: .normal)
        button.titleLabel?.font = Style().buttonFont
        button.addTarget(self, action: #selector(HomeViewController.startFlight), for: .touchUpInside)
        
        
        view.addSubview(button)
        
        view.layer.cornerRadius = 25
        view.layer.maskedCorners = [.layerMinXMinYCorner]

        return view
    }
    
    func stopFlightView(frame: CGRect) -> UIView {
        let view = UIView(frame: frame)
        view.backgroundColor = Style().primaryBackgroundColor
        
        
        let button = UIButton(frame: CGRect(x: frame.width*0.133, y: frame.height*0.269, width: frame.width*0.731, height: frame.height*0.521))
        button.backgroundColor = Style().warningColor
        button.layer.cornerRadius = 15
        button.setTitle("Stop Flight", for: .normal)
        button.titleLabel?.font = Style().buttonFont
        button.addTarget(self, action: #selector(HomeViewController.stopFlight), for: .touchUpInside)
        
        
        view.addSubview(button)
        
        view.layer.cornerRadius = 25
        view.layer.maskedCorners = [.layerMinXMinYCorner]

        return view
    }
}
