#ifndef SONG_PLAYLIST_H
#define SONG_PLAYLIST_H
#include <iostream>
#include <string>

// class for circular linked list
class Song_Playlist {
    public:
    std::string SongName;
    Song_Playlist* next = nullptr;
};

// Displays titles of songs
void SPTraverse(Song_Playlist* head) {
    if(head == nullptr) {
        std::cout << "There are no songs added yet." << std::endl;
        return;
    }
    while(head != nullptr) {
        std::cout <<head->SongName <<std::endl;
        head = head->next;
    }
}

// Adds song to the playlist
void SPAddSong (std::string newSongName, Song_Playlist** head) {
    Song_Playlist* newNode = new Song_Playlist;
    Song_Playlist* currentNode = *head;
    newNode->SongName = newSongName;
    newNode->next = nullptr;
    if (currentNode == nullptr) {
        *head = newNode;
        return;
    }
    else {
        while(currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }
    }  
    currentNode->next = newNode;
}

// Deletes song to the playlist
void SPDeleteSong (std::string findSongName, Song_Playlist** head) {
    if (*head == nullptr) {
        std::cout <<"There are no songs to delete." <<std::endl;
        std::cout <<"Enter any key to go back to main menu";
    }
    else {
    Song_Playlist* currentNode = *head;
    Song_Playlist* prevNode = nullptr;

    while (currentNode->SongName != findSongName) {
        prevNode = currentNode;
        currentNode = currentNode->next;
    }
    if (currentNode != nullptr) {
        prevNode->next = currentNode->next;
        delete currentNode;
        std::cout <<"Song Deleted!" <<std::endl;
    }
}
}
#endif