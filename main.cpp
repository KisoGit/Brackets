//
// Created by Kisomazu on 08.09.2020.
//

#include "TakeInput.h"
#include "Data/BinaryTree.h"

int main()
{
    TakeInput takeInput;
    takeInput.gameStart();

    BinaryTree binaryTree(takeInput.getPlayers());

    //Runningloop starts. Maybe bring the stuff above into this too.
    bool running = true;
    while(running) {
        takeInput.beforeGameLoop(&running);
        if(!running){ break;}
        takeInput.inGameLoop(&running);                   //TODO: USE DESIGN PATTERN STATE INSTEAD OF 3 METHODS
        if(!running){ break;}
        takeInput.afterGameLoop(&running);                //TODO: USE DESIGN PATTERN STATE INSTEAD OF 3 METHODS
    }
    return 0;
}
