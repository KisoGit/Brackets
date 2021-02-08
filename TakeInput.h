//
// Created by Kisomazu on 10.09.2020.
//

#pragma once
#include <string>

class TakeInput {
public:
    void gameStart();
    void beforeGameLoop(bool*);
    void inGameLoop(bool*);
    void afterGameLoop(bool*);
    void exit(bool*);
    std::string* getPlayers();
    TakeInput();


private:
        std::string number;
        std::string userCommand;
        int numberOfPlayers;
        std::string players[256];
};