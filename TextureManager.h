//
// Created by mynewdog on 11.03.19.
//

#ifndef ARCADEGAME_TEXTUREMANAGER_H
#define ARCADEGAME_TEXTUREMANAGER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

class TextureManager {
public:
    static SDL_Texture* LoadTexture(std::string texture, SDL_Renderer* ren);

};


#endif //ARCADEGAME_TEXTUREMANAGER_H
