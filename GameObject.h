//
// Created by mynewdog on 12.03.19.
//

#ifndef ARCADEGAME_GAMEOBJECT_H
#define ARCADEGAME_GAMEOBJECT_H


#include <SDL_rect.h>
#include "TextureManager.h"

class GameObject {
private:
    SDL_Rect srcRect, destRect;
    TextureManager objectTexture;
    int xPos, yPos;
    std::string objectName;

public:
    GameObject(TextureManager &objectTexture, SDL_Rect srcRect, SDL_Rect destRect, int xPos, int yPos, std::string &name);
    ~GameObject();
    int getObjectPosX() { return xPos; };
    int getObjectPosY() { return yPos; };
    void setObjectPosX(int x) { this->xPos = x; }
    void setObjectPosY(int y) { this-> yPos = y; }


};


#endif //ARCADEGAME_GAMEOBJECT_H
