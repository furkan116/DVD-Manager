//
//  music.hpp
//  DVD Manager
//
//  Created by Furkan Yıldırım on 9.09.2020.
//  Copyright © 2020 Furkan Yıldırım. All rights reserved.
//

#ifndef music_hpp
#define music_hpp

#include "mainFunctions.hpp"

class Music {
    
private:
    //Movie information
    std::string musicName;
    std::string singerName;
    std::string musicGenre;
    int musicYear;
    
public:
    //Constructors and Deconstructors
    Music();
    Music(std::string musicName, std::string singerName, std::string musicGenre, int musicYear);
    ~Music();
    
    //Functions
    void musicMainDisplay();
    void addMusic();
    void showMusic();
    void searchMusic();
    void deleteMusic();
    
};
#endif /* music_hpp */
