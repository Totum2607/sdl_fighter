#include "Game.h"

void Game::onEvent(){
    while(SDL_PollEvent(&event)){
       switch(event.type) {
       case SDLK_RIGHT:
           while(event.type == SDL_KEYDOWN){
              fingerDown = true;
           }
       case SDL_QUIT:
           running = false;
           break;

       }
    }
}
