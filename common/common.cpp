//
//  common.cpp
//  common
//
//  Created by Valentin Dufois on 2020-02-18.
//  Copyright © 2020 Perihelion. All rights reserved.
//

#include <iostream>
#include "common.hpp"
#include "commonPriv.hpp"

void common::HelloWorld(const char * s)
{
    commonPriv *theObj = new commonPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void commonPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

