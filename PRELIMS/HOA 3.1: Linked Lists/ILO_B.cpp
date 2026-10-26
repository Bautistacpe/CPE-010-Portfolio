// import song_playylist.h
#include <iostream>
#include <string>
#include "song_playlist.h"

int main() {
    // declare parameters for main menu and switch cases
    int choice;
    std::string Exit;
    std::string song;
    Song_Playlist* head = nullptr;

 // while loop that will loop until choice == 5
while (choice != 5) {
    // main menu
    std::cout <<"\n-----Main Menu-----" <<std::endl;
    std::cout <<"1. Add a song" <<std::endl;
    std::cout <<"2. Delete a song" <<std::endl;
    std::cout <<"3. Check Playlist" <<std::endl;
    std::cout <<"4. PLay all songs" <<std::endl;
    std::cout <<"5. Exit" <<std::endl;
    std::cout <<"\nEnter your choice: ";
    std::cin >> choice;

// switch case for choice
switch (choice) {
    // Adds song
    case 1: {
        std::cout <<"Please enter the song you want to add: ";
        std::cin.ignore();
        std::getline(std::cin, song);
        SPAddSong(song, &head);
        std::cout <<"Song Added!" <<std::endl;
        break;
    }

    // Deletes song
    case 2: {
        std::cout <<"Please enter the song you want to delete: ";
        std::cin >> song;
        SPDeleteSong(song, &head);
        break;
    }

    //  Checks the contents of the playlist
    case 3: {
        std::cout <<"List of Songs: " <<std::endl;
        SPTraverse(head);
        std::cout <<"\nEnter any key to go back to the main menu" <<std::endl;
        std::cin >> Exit;
        break;
    }

    // Play the songs (Display all the songs once)
    case 4: {
        std::cout <<"Now Playing:" <<std::endl;
        SPTraverse(head);
        std::cout <<"\nEnter any key to stop the playlist and go back to the main menu" <<std::endl;
        std::cin >> Exit;
        break;
    }

    //Exit case
    case 5: {
        break;
    }
}
}
}