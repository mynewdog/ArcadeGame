//
// Created by mynewdog on 11.03.19.
//

#ifndef ARCADEGAME_TEXTUREMANAGER_H
#define ARCADEGAME_TEXTUREMANAGER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iosfwd>

namespace TextureUtils {

    class TextureManager {
    public:
        static SDL_Texture *load_texture(std::string texture, SDL_Renderer *ren);

    };
}


#endif //ARCADEGAME_TEXTUREMANAGER_H
