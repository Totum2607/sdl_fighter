#include "Game.h"

void MainApp::onEvent(){
    SDL_Event event;
    while(SDL_PollEvent(&event)){
       switch(event.type) {
       case SDL_QUIT:
           running = false;
       }
    }
}
