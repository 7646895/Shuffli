//
//  Datasource.swift
//  Test
//
//  Created by Jessica Vilaysak on 10/5/17.
//  Copyright © 2017 Pranav Joshi. All rights reserved.
//

import UIKit

class Datasource {

    var name: String!
    var userArray : [String] = []
    var currentCount: Int!
    var postsobj : [(image: UIImage, caption: String)] = []
    
    var tempPosts : [String] = ["1", "2", "3", "4"]

    init() {
        self.name = "TESTName"
        currentCount = 0
        
    }
    
  
}
let dataSource = Datasource()

