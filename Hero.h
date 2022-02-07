#ifndef HERO_H
#define HERO_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <config.h>

class Hero{
public:
    Hero(SDL_Rect heroR, SDL_Rect renderR, int change, int width, SDL_Surface *image, SDL_Renderer *renderer);
    ~Hero(){};

    SDL_Rect heroRect;
    SDL_Rect rendererRect;
    SDL_Texture *hero;

    int getHeroChange();
    void setHeroChange();
    int getHeroWidth();

private:
    int heroChange;
    int heroWidth;
};

#endif // HERO_H
