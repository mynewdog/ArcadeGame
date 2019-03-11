//
// Created by mynewdog on 11.03.19.
//

#ifndef ARCADEGAME_GAME_H
#define ARCADEGAME_GAME_H


#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Game {
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event event;
    bool isRunning;
    int counter{0};

public:
    Game();
    ~Game();

    void handleExitEvent();
    void initWindow(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);
    void update();
    void render();
    void clean();
    bool running() { return isRunning; }

};


#endif //ARCADEGAME_GAME_H
