//
//  main.cpp
//  DVD Manager
//
//  Created by Furkan Yıldırım on 3.09.2020.
//  Copyright © 2020 Furkan Yıldırım. All rights reserved.
//


#include <iostream>
#include "movie.hpp"

void mainDisplay();

int main(int argc, const char * argv[]) {
    
    mainDisplay();
    
    return 0;
}

void mainDisplay() {
    
    std::cout << "*****DVD Store*****" << std::endl;
    std::cout << "-------------------" << std::endl;
    
    int choice;
    
    std::cout << "Select one option blow" << std::endl;
    std::cout << std::setw(10) << "1-->" << "Movie" << std::endl;
    std::cout << std::setw(10) << "2-->" << "Music" << std::endl;
    std::cout << std::setw(10) << "0-->" << "Quit" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch(choice) {
        case 1: std::cout << "Success"; break;
        case 2: std::cout << "Success"; break;
        case 0: std::cout << "Success"; break;
        default: std::cout << "Wrong choice!!" << std::endl;
    }

}
