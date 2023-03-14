//
//  MetricsTableViewCell.swift
//  FlyFit
//
//  Created by Anna Johnson on 3/13/23.
//

import UIKit

class MetricsTableViewCell: UITableViewCell {

    var metricsImageView = UIImageView()
    var metricsLabel = UILabel()
    var indicator: String?
    var cellColor: UIColor?
    
    override init(style: UITableViewCell.CellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        addSubview(metricsLabel)
        addSubview(metricsImageView)
        //we need to change this color
        tintColor = UIColor(red: 0/255, green: 85/255, blue: 187/255, alpha: 1)

        configureTitleLabel()
        setTitleLabelConstraints()
        
    }
    
    required init(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func setup(metrics: Metric) {
        metricsImageView.image = metrics.sensorType.image
        metricsImageView.contentMode = .scaleAspectFit
        metricsLabel.text = metrics.sensorType.title
        indicator = metrics.indicator
        setImageConstraints(size: metrics.sensorType.size)
        
        switch indicator {
        case "healthy":
            cellColor = Style().healthyColor
            super.layer.borderWidth = 0
        case "warning":
            cellColor = Style().warningColor
            super.layer.borderWidth = 5
            super.layer.borderColor = cellColor?.cgColor
            
        case "urgent":
            cellColor = Style().urgentColor
            super.layer.borderWidth = 5
            super.layer.borderColor = cellColor?.cgColor
        case .none:
            print("Indicator value nil")
        case .some(_):
            print("Indicator value some")
        }
        
        metricsImageView.tintColor = cellColor
       
    }
    
    func configureIconView() {
        metricsImageView.layer.cornerRadius = 10
        metricsImageView.clipsToBounds = true
    }
    func configureTitleLabel() {
        metricsLabel.numberOfLines = 0
        metricsLabel.adjustsFontSizeToFitWidth = true
        metricsLabel.font = Style().subheadingFont
        metricsLabel.textColor = Style().primaryTextColor
    }
    
    func setImageConstraints(size: CGSize) {
        metricsImageView.translatesAutoresizingMaskIntoConstraints = false
        metricsImageView.centerYAnchor.constraint(equalTo: centerYAnchor).isActive = true
        metricsImageView.centerXAnchor.constraint(equalTo: trailingAnchor, constant: -67.5).isActive = true
        metricsImageView.heightAnchor.constraint(equalToConstant: size.height).isActive = true
        metricsImageView.widthAnchor.constraint(equalToConstant: size.width).isActive = true
    }
    
    func setTitleLabelConstraints() {
        metricsLabel.translatesAutoresizingMaskIntoConstraints = false
        metricsLabel.topAnchor.constraint(equalTo: topAnchor).isActive = true
        metricsLabel.leadingAnchor.constraint(equalTo: leadingAnchor, constant: 20).isActive = true
        metricsLabel.heightAnchor.constraint(equalToConstant: 80).isActive = true
        metricsLabel.trailingAnchor.constraint(equalTo: trailingAnchor, constant: -12).isActive = true
    }

}
