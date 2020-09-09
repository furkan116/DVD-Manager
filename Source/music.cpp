//
//  music.cpp
//  DVD Manager
//
//  Created by Furkan Yıldırım on 9.09.2020.
//  Copyright © 2020 Furkan Yıldırım. All rights reserved.
//

#include "music.hpp"
#include "mainFunctions.hpp"

mainFunctions mainF;

//Constructors
Music::Music() {}

Music:: Music(std::string musicName, std::string singerName, std::string musicGenre, int musicYear) {
    this->musicName = musicName;
    this->singerName = singerName;
    this->musicYear = musicYear;
    this->musicGenre = musicGenre;
}

//Deconstructors
Music:: ~Music() {}


//Functions
void Music::musicMainDisplay() {
    
    //Movies Main Menu
    std::cout << "*****DVD Store*****" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << std::endl << "***MUSICS***"<< "\n" << std::endl;
    
    std::string musicMainChoice;
    
    std::cout << "Select one option blow" << std::endl;
    std::cout << std::setw(10) << "1-->" << "Add Music" << std::endl;
    std::cout << std::setw(10) << "2-->" << "Show All Musics" << std::endl;
    std::cout << std::setw(10) << "3-->" << "Search Music(Only Windows)" << std::endl;
    std::cout << std::setw(10) << "4-->" << "Delete Music(Only Windows)" << std::endl;
    std::cout << std::setw(10) << "0-->" << "Main Menu" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> musicMainChoice;
    
    if (musicMainChoice == "1") {
        addMusic();
    }
    else if (musicMainChoice == "2") {
        showMusic();
    }
    else if (musicMainChoice == "3") {
        searchMusic();
    }
    else if (musicMainChoice == "4") {
        deleteMusic();
    }
    else if (musicMainChoice == "0") {
        mainF.mainDisplay();
    }
    else {
        std::cout << "Wrong choice!!"; mainF.mainPause(); musicMainDisplay();
    }
}

void Music::addMusic() {
    
    //Add new movie
    
    std::cout << "*****DVD Store*****" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << std::endl << "***Add New Music***"<< "\n\n" << std::endl;
    
    std::fstream musicRecord("musicRecord.txt", std::fstream::in |std::fstream::out | std::fstream::app);

    std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << std::setw(15) << "Music Name: ";
    std::getline(std::cin, musicName);
    std::cout << std::setw(15) << "Singer Name: ";
    std::getline(std::cin, singerName);
    std::cout << std::setw(15) << "Genre: ";
    std::cin >> musicGenre;
    std::cout << std::setw(15) << "Year: ";
    std::cin >> musicYear;

    musicRecord << std::setw(20) << musicName << std::setw(23) << singerName << std::setw(14) << musicGenre << std::setw(13) << musicYear << std::endl;
    musicRecord.close();

    system("CLS");
    
    std::cout << "new music has been successfully added" << std::endl;
    
    mainF.mainPause();
    
    musicMainDisplay();
}

void Music::showMusic() {
    
    //Show all movies
    
    std::fstream musicRecord("musicRecord.txt", std::fstream::in);

    std::cout << "*****DVD Store*****" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << std::endl << "****All  Musics****"<< "\n\n" << std::endl;
    
    musicRecord << std::setw(20) << musicName << std::setw(23) << singerName << std::setw(14) << musicGenre << std::setw(13) << musicYear << std::endl;
    
    std::string myText;
    
    while (std::getline (musicRecord, myText)) {
      // Output the text from the file
        std::cout << myText << std::endl;
    }
    
    
    mainF.mainPause();

    musicMainDisplay();
}

//Only Windows
void Music::searchMusic() {
    
    //Search movie
    
    std::fstream musicRecord("musicRecord.txt", std::fstream::in |std::fstream::out | std::fstream::app);

    std::cout << "*****DVD Store*****" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << std::endl << "***Search Musics***"<< "\n\n" << std::endl;
        
    std::string searchName;
    
    std::cout << "Enter music name for search: ";
    std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, searchName);
    std::cout << std::endl;
    
    std::string myText;
    
    while (musicRecord >> musicName >> singerName >> musicGenre >> musicYear) {
        
        if (searchName == musicName) {
            std::cout << std::setw(20) << "Music Name" << " | " << std::setw(20) << "Singer Name" << " | " << std::setw(10) << "Music Genre" << " | " << std::setw(10) << "Music Year" << std::endl;
            std::cout << myText << std::endl;
        }
    }
    
    
    mainF.mainPause();

    musicMainDisplay();

}

//Only Windows
void Music::deleteMusic() {
    //Search and delete movie
    
    std::fstream musicRecord("musicRecord.txt", std::fstream::in |std::fstream::out | std::fstream::app);
    std::fstream temp("temp.txt", std::fstream::in |std::fstream::out | std::fstream::app);


    std::cout << "*****DVD Store*****" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << std::endl << "***Delete Music***"<< "\n\n" << std::endl;
        
    std::string searchName;
    
    std::cout << "Enter music name for delete: ";
    std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, searchName);
    std::cout << std::endl;
    
    
    while (musicRecord >> musicName >> singerName >> musicGenre >> musicYear) {
        if (searchName == musicName) {
            continue;
        }
        else {
            temp << std::setw(20) << musicName << std::setw(23) << singerName << std::setw(14) << musicGenre << std::setw(13) << musicYear << std::endl;
        }
    }
    
    temp.close();
    musicRecord.close();
    
    std::remove("musicRecord.txt");
    
    std::rename("temp.txt", "musicRecord.txt");
    mainF.mainPause();

    musicMainDisplay();
}

