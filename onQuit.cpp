#include "Game.h"

void MainApp::onQuit(){
        SDL_DestroyWindow(window);
        SDL_FreeSurface(screen);
}
