#include <iostream>
#include "Timer.h"
#include "Game.h"

int main(int argc, const char *argv[]) {
    EngineUtils::Timer* timer = EngineUtils::Timer::Instance();
    Game* game = nullptr;

    game = new Game();

    game->initWindow("Vulfpeck", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    while(game ->running()) {

        timer->Tick();

        if(timer->deltaTime() >= 1 / timer->getFrameRate()) {
            //Not changing deltaTime when using reset()
            timer->Reset();
            //std::cout << timer->deltaTime() << std::endl;

            game->handleExitEvent();
            game->update();
            game->render();
        }
    }

    game->clean();
    EngineUtils::Timer::Release();
    return 0;
}