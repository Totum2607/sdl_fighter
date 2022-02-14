#ifndef MAINAPP_H
#define MAINAPP_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Hero.h"
#include <includes/config.h>


class Game{

public:
    Game(){}
    ~Game(){}
    int onExecute();


private:
    void onInit();
    void onEvent();
    void onRender();
    void onLoop();
    void onQuit();


    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Surface *loader;
    SDL_Event event;

    Hero *leftFighter;
    Hero *rightFiter;


    bool running;
    bool fingerDown;


};

#endif // MAINAPP_H
