//
// Created by Kisomazu on 10.09.2020.
//

#include <iostream>
#include <cstdlib>
#include "TakeInput.h"


//CreateMethod which saves the numbers of players given by the user.
TakeInput::TakeInput() {
    TakeInput::numberOfPlayers = 0;
}

//Return the players array given by user once to the BinaryTree.
std::string* TakeInput::getPlayers() {
    return players;
}

//Execute this to get the Players as input from user.
void TakeInput::gameStart() {

    TakeInput::numberOfPlayers = 0;
    do
    {
        std::cout << "Enter the number of players!\n"
        "It must be between 2 and 128" << std::endl;
        std::cin >> number;
        TakeInput::numberOfPlayers = std::atoi(number.c_str());
    } while (TakeInput::numberOfPlayers > 120 || TakeInput::numberOfPlayers < 2 );

    for (int i = 0; i < numberOfPlayers; i++)
    {
        std::cout << "Enter a name for Player" << i+1 << std::endl;
        std::cin >> players[i];
    }

    for (int i = 0; i < numberOfPlayers; i++)
    {
        std::cout << "Player" << i + 1 << " is " << players[i] << std::endl;
    }

    BinaryTree binaryTree(this->getPlayers(), this->numberOfPlayers);
}

//Before-game-loop.
void TakeInput::beforeGameLoop(bool* running) {

    std::cout << "What now?" << std::endl;
    std::cin >> userCommand;

    if (userCommand.compare("exit") == 0) {
        TakeInput::exit(running);
    } else if (userCommand.compare("commands") == 0) {
        std::cout << "Enter \"start\" to start a game.\n"
        "Enter \"exit\" to exit this program.\n"
        "Enter \"commands\" to see a list of all commands.\n"
        "Enter \"tree\" to see the current Bracket." << std::endl;
    } else if (userCommand.compare("start") == 0) {

//    } else if (userCommand.compare("tree") == 0) { TODO
//	    binaryTree.drawBinaryTree();		TODO
    }else {
        std::cout << "Command not found. \n"
                     "To see a list of all the Commands enter \"commands\" " << std::endl;
    };
}

//Ongoing-game-loop
void TakeInput::inGameLoop(bool* running) {
    if (userCommand.compare("exit") == 0) {
        TakeInput::exit(running);
    }
}

void TakeInput::afterGameLoop(bool* running){
    if (userCommand.compare("exit") == 0) {
            TakeInput::exit(running);
    }
}

void TakeInput::exit(bool* running) {
    std::cout << "Bye! :)" << std::endl;
    *running = false;
}
