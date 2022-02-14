#include <includes/Game.h>

int Game::onExecute(){

    onInit();

    onLoop();

    onQuit();
    return 0;
}
