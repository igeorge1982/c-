//
//  factory.hpp
//  Practice
//
//  Created by Gaspar Gyorgy on 19/01/16.
//  Copyright © 2016 Gaspar Gyorgy. All rights reserved.
//

#ifndef factory_hpp
#define factory_hpp

#include <stdio.h>
#include "second.h"

// class declaration

namespace sec {
    
    class Factory {
        
    public:
        enum State {
        
            California,
            Florida
        
        };
        
        static Factory* getInstance();
        
        Second* getState(State);
        
    private:
        Factory();
    };
    
} /* namespace sec */

#endif /* factory_hpp */
