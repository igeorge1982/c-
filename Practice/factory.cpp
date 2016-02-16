//
//  factory.cpp
//  Practice
//
//  Created by Gaspar Gyorgy on 19/01/16.
//  Copyright © 2016 Gaspar Gyorgy. All rights reserved.
//

#include "factory.hpp"

// class implementation (i.e. exwhatever methods)

namespace sec {
    
    Factory::Factory() {
        srand(static_cast<unsigned int>(time(NULL)));
    }
    
    Second* Factory::getState(State s) {
        if (s == Factory::California ) {
            
            Second* lotto = new Second(5);
            return lotto;
            
        } else {
            
            Second* lotto =  new Second(6);
            return lotto;
        }
    }
    
    // init
    Factory* Factory::getInstance() {
        
        static Factory instance;
        return &instance;
    }
    
} /* namespace lotto */