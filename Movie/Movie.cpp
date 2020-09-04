//
//  Movie.cpp
//  DVD Manager
//
//  Created by Furkan Yıldırım on 3.09.2020.
//  Copyright © 2020 Furkan Yıldırım. All rights reserved.
//

#include "Movie.hpp"

//Constructors
Movies:: Movies() {}

Movies:: Movies(std::string movieName, std::string movieDirectorName, std::string movieGenre, float movieImdbScore, int movieYear) {
    this->movieName = movieName;
    this->movieDirectorName = movieDirectorName;
    this->movieYear = movieYear;
    this->movieGenre = movieGenre;
    this->movieImdbScore = movieImdbScore;
}

//Deconstructors
Movies:: ~Movies() {}


//Functions
void Movies::moviesMainDisplay() {
    
    std::cout << "*****DVD Store*****" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << std::endl << "***MOVIES***"<< "\n" << std::endl;
    
    std::string moviesMainChoice;
    
    std::cout << "Select one option blow" << std::endl;
    std::cout << std::setw(10) << "1-->" << "Add Movie" << std::endl;
    std::cout << std::setw(10) << "0-->" << "Main Menu" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> moviesMainChoice;
    
    if (moviesMainChoice == "1") {
        this->addMovie();
    }
    else if (moviesMainChoice == "0") {
        
    }
    else {
        std::cout << "Wrong choice!!"; this->moviesMainDisplay();
    }
}

void Movies::addMovie() {
    
    std::cout << "*****DVD Store*****" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << std::endl << "***Add New Movie***"<< "\n\n" << std::endl;
    
    std::fstream movieRecord("movieRecord.txt", std::fstream::in |std::fstream::out | std::fstream::app);

    std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << std::setw(15) << "Movie Name: ";
    std::getline(std::cin, movieName);
    std::cout << std::setw(15) << "Director Name: ";
    std::getline(std::cin, movieDirectorName);
    std::cout << std::setw(15) << "Genre: ";
    std::cin >> movieGenre;
    std::cout << std::setw(15) << "IMDB Score: ";
    std::cin >> movieImdbScore;
    std::cout << std::setw(15) << "Year: ";
    std::cin >> movieYear;

    movieRecord << std::setw(20) << movieName << std::setw(20) << movieDirectorName << std::setw(20) << movieGenre << std::setw(5) << movieImdbScore << std::setw(10) << movieYear << std::endl;

    system("CLS");
    
    std::cout << "new movie has been successfully added" << std::endl;

    moviesMainDisplay();
}

