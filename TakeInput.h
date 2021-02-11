//
// Created by Kisomazu on 10.09.2020.
//

#pragma once
#include <string>
#include "BinaryTree.h"

class TakeInput {
public:
    void gameStart();
    void beforeGameLoop(bool*);
    void inGameLoop(bool*);
    void afterGameLoop(bool*);
    void exit(bool*);
    std::string* getPlayers();
    int getNumberOfPlayers();
    TakeInput();


private:
        std::string number;
        std::string userCommand;
        int numberOfPlayers;
        std::string players[256];
	BinaryTree binaryTree(std::string players[], int numberOfPlayers);
};
