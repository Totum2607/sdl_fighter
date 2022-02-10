#include "Game.h"

void Game::onLoop(){
    while(running){
        onEvent();

        onRender();
    }
}
