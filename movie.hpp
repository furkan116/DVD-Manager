//
//  movie.hpp
//  DVD Manager
//
//  Created by Furkan Yıldırım on 3.09.2020.
//  Copyright © 2020 Furkan Yıldırım. All rights reserved.
//

#ifndef movie_hpp
#define movie_hpp

#include <iostream>
#include <iomanip>
#include <list>

class Movies {
    
private:
    //Movie information
    std::string movieName;
    std::string movieDirectorName;
    std::string movieGenre;
    float movieImdbScore;
    int movieYear;
    std::list <std::string> movieCast;
    
public:
    //Constructors and Deconstructors
    Movies();
    ~Movies();
    
    //Functions
    void addMovie();
    void showMovies();
    void searchMovie();
    void updateMovie();
    void deleteMovie();
    
};

#endif /* movie_hpp */
