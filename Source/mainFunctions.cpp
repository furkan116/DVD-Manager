//
//  mainFunctions.cpp
//  DVD Manager
//
//  Created by Furkan Yıldırım on 6.09.2020.
//  Copyright © 2020 Furkan Yıldırım. All rights reserved.
//

#include "mainFunctions.hpp"

void mainFunctions::mainPause() {
    
    //Pause functions
    std::cout << "\nPress any key to continue";
    std::system("read");
    
}

//NOT WORKING
void mainFunctions::mainClear() {
    std::system("clear");
}

void mainFunctions::mainDisplay() {
    
    //Main Menu
    std::cout << "****DVD Manager****" << std::endl;
    std::cout << "-------------------" << std::endl;
    
    std::string choice;
    Movies movie;
    
    std::cout << "Select one option blow" << std::endl;
    std::cout << std::setw(10) << "1-->" << "Movie" << std::endl;
    std::cout << std::setw(10) << "2-->" << "Music" << std::endl;
    std::cout << std::setw(10) << "3-->" << "Game" << std::endl;
    std::cout << std::setw(10) << "0-->" << "Quit" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == "1") {
        mainClear();
        movie.moviesMainDisplay();
    }
    else if (choice == "2") {
        std::cout << "Success";
    }
    else if (choice == "3") {
        std::cout << "Success";
    }
    else if (choice == "0") {
        std::cout << "Have a nice day";
        mainPause();
    }
    else {
        std::cout << "Wrong choice!!"; mainPause(); mainDisplay();
    }

}
