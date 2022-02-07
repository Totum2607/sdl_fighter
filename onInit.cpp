#include "Game.h"
#include "config.h"
#include <iostream>

void MainApp::onInit(){
    if(SDL_Init(SDL_INIT_EVERYTHING)){
        std::cout << "Error of the inicialisation " << SDL_GetError();
    } else{
        window = SDL_CreateWindow("MyWindow", SDL_WINDOWPOS_UNDEFINED,
                                              SDL_WINDOWPOS_UNDEFINED,
                                              WINDOW_WIDTH,
                                              WINDOW_HEIGHT,
                                              SDL_WINDOW_RESIZABLE);

        screen = SDL_GetWindowSurface(window);

        rect = SDL_CreateRGBSurface(0, WINDOW_WIDTH, WINDOW_HEIGHT, 32, 0, 0, 0, 0);

        SDL_FillRect(rect, NULL, SDL_MapRGB(rect->format, 255, 200, 0));
        SDL_BlitSurface(rect, NULL, screen, NULL);



    }
}
