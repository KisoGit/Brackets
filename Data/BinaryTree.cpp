//
// Created by Kisomazu on 11.09.2020.
//

#include "BinaryTree.h"

BinaryTree::BinaryTree(std::string *players) {
    for(int i = 0; i < players->size();i++){
        BinaryTree::players[i] = players[i];
        numberOfPlayers = i;
    }
    numberOfPlayers ++;
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
    	
	for(int i = 0; i < (this->getNumberOfPlayers()*2); i++) {
	std::cout << this->getPlayer(i) << std::endl;
	} 
	return 0;
}

int BinaryTree::nextRound(std::string *winners) {
    return 0;
}
