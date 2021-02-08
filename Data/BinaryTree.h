//
// Created by Kisomazu on 11.09.2020.
//

#pragma once
#include <iostream>
#include <string>

class BinaryTree {
public:
    explicit BinaryTree(std::string players[]);
    std::string* getPlayers();
    std::string getPlayer(int iD);
    int getNumberOfPlayers();
    int drawBinaryTree();
    int nextRound(std::string winners[]);
private:
    std::string players[256];
    int numberOfPlayers;
};
