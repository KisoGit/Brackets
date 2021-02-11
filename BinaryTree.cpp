//
// Created by Kisomazu on 11.09.2020.
//

#include "BinaryTree.h"

BinaryTree::BinaryTree(std::string *players, int numberOfPlayers) {
    for(int i = 0; i < players->size();i++){
        BinaryTree::players[i] = players[i];
    }
    this->numberOfPlayers = numberOfPlayers;
}

std::string* BinaryTree::getPlayers() {
    return players;
}

std::string BinaryTree::getPlayer(int iD) {
    return getPlayers()[iD];
}

int BinaryTree::getNumberOfPlayers() {
    return numberOfPlayers;
}

int BinaryTree::drawBinaryTree() {
    	
	for(int i = 0; i <= this->getNumberOfPlayers(); i++) {
	std::cout << this->getPlayer(i) << std::endl;
	}
	std::cout << getPlayer(1) << std::endl;
        std::cout << getNumberOfPlayers() <<std::endl;
	return 0;
}

int BinaryTree::nextRound(std::string *winners) {
    return 0;
}
