#include "Hero.h"

Hero::Hero(SDL_Rect heroR, SDL_Rect renderR, int change, int width, SDL_Surface * image, SDL_Renderer *renderer)
    : heroChange(change), heroWidth(width), heroRect(heroR), rendererRect(renderR), hero(SDL_CreateTexturefromSurface(renderer,image)){}
