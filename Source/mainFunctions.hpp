//
//  mainFunctions.hpp
//  DVD Manager
//
//  Created by Furkan Yıldırım on 6.09.2020.
//  Copyright © 2020 Furkan Yıldırım. All rights reserved.
//

#ifndef mainFunctions_hpp
#define mainFunctions_hpp

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <curses.h>
//#include <list>

#include "movie.hpp"

class mainFunctions {
    
public:
    void mainPause();
    void mainClear();
    void mainDisplay();
};

#endif /* mainFunctions_hpp */
