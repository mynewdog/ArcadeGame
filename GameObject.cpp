//
// Created by mynewdog on 12.03.19.
//

#include "GameObject.h"
#include <iostream>

GameObject::GameObject(TextureUtils::TextureManager &objectTexture, SDL_Rect srcRect, SDL_Rect destRect, int xPos, int yPos, std::string &name)
: objectTexture{objectTexture}, srcRect{srcRect}, destRect{destRect}, xPos{xPos}, yPos{yPos}, objectName{name} {}


