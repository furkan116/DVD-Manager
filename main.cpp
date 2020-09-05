//
//  main.cpp
//  DVD Manager
//
//  Created by Furkan Yıldırım on 3.09.2020.
//  Copyright © 2020 Furkan Yıldırım. All rights reserved.
//


#include <iostream>
#include "Source/movie.hpp"

void mainDisplay();

int main(int argc, const char * argv[]) {
    
    mainDisplay();
    
    return 0;
}

void mainDisplay() {
    
    std::cout << "*****DVD Store*****" << std::endl;
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
        movie.moviesMainDisplay();
    }
    else if (choice == "2") {
        std::cout << "Success";
    }
    else if (choice == "3") {
        std::cout << "Success";
    }
    else if (choice == "0") {
        std::system("CLS");
        std::cout << "Have a nice day";
    }
    else {
        std::cout << "Wrong choice!!"; std::system("pause"); mainDisplay();
    }

}
