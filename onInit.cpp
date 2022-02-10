#include "Game.h"
#include "config.h"
#include <iostream>

void Game::onInit(){
    if(SDL_Init(SDL_INIT_EVERYTHING)){
        std::cout << "Error of the inicialisation " << SDL_GetError();
    } else{
        window = SDL_CreateWindow("MyWindow", SDL_WINDOWPOS_UNDEFINED,
                                              SDL_WINDOWPOS_UNDEFINED,
                                              WINDOW_WIDTH,
                                              WINDOW_HEIGHT,
                                              SDL_WINDOW_RESIZABLE);

        renderer = SDL_CreateRenderer(window, -1, 0);
        loader = IMG_Load("res/human.phg");

        SDL_Rect humanRect = {0, 0, 350, 800};
        SDL_Rect rendererRect = {0, 600, 150, 150};

        int humanChange = 0;
        int humanWidth = 380;

        leftFighter = new Hero(humanRect, rendererRect, humanChange, humanWidth, loader, renderer);

        SDL_FreeSurface(loader);


    }
}
