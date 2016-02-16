//
//  second.hpp
//  Practice
//
//  Created by Gaspar Gyorgy on 18/01/16.
//  Copyright © 2016 Gaspar Gyorgy. All rights reserved.
//

#ifndef second_hpp
#define second_hpp

#include <string>
#include <stdio.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <time.h>

using namespace std;

// declaration

namespace sec {
    
    class Second {
    
    protected:
        int secNum;
        int* getNumber();
        
    public:
        Second(int);
        
        virtual ~Second();
        virtual string printNum();
        
    };
    
} /* namespace sec */

#endif /* second_h */
