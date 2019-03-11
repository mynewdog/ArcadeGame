//
// Created by mynewdog on 11.03.19.
//

#include "TextureManager.h"


SDL_Texture* TextureManager::LoadTexture(std::string texture, SDL_Renderer *ren) {
    SDL_Surface* tmpSurface = IMG_Load(texture.c_str());
    if(tmpSurface == nullptr) {
        std::cout << "Unable to load image: " << SDL_GetError() << std::endl;
    }
    SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tmpSurface);
    SDL_FreeSurface(tmpSurface);
    return tex;
}