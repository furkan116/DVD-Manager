//
//  Movie.hpp
//  DVD Manager
//
//  Created by Furkan Yıldırım on 3.09.2020.
//  Copyright © 2020 Furkan Yıldırım. All rights reserved.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <list>

class Movies {
    
private:
    //Movie information
    std::string movieName;
    std::string movieDirectorName;
    std::string movieGenre;
    float movieImdbScore;
    int movieYear;
    
public:
    //Constructors and Deconstructors
    Movies();
    Movies(std::string movieName, std::string movieDirectorName, std::string movieGenre, float movieImdbScore, int movieYear);
    ~Movies();
    
    //Functions
    void moviesMainDisplay();
    void addMovie();
    void showMovies();
    void searchMovie();
    void deleteMovie();
    
};

#endif /* Movie_hpp */
