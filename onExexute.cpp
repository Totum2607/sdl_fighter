#include <Game.h>

int MainApp::exec(){

    onInit();

    while(running){

    onEvent();
    SDL_UpdateWindowSurface(window);

}
    onQuit();
    return 0;
}
