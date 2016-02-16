//
//  second.cpp
//  Practice
//
//  Created by Gaspar Gyorgy on 18/01/16.
//  Copyright © 2016 Gaspar Gyorgy. All rights reserved.
//

#include "second.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

// class implementation (i.e. exwhatever methods)

namespace sec {
    
    Second::Second(int num) {
        this->secNum = num;
    }
    
    // destructor
    Second::~Second()
    {
    }
    
    int * Second::getNumber()
    {
        int * dot = new int[this->secNum +1];
        * dot = 7;
        
        return dot;
    }
    
    string Second::printNum()    {
        
        ostringstream str;
        
        int* nums = this->getNumber();

            str << *nums << ' ';
        
        return str.str();
    }
    
}