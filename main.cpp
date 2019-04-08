#include <iostream>
#include "Timer.h"
#include "Game.h"

int main(int argc, const char *argv[]) {
    EngineUtils::Timer* timer = EngineUtils::Timer::Instance();
    Game::Game* game = nullptr;

    game = new Game::Game();

    game->init_window("Vulfpeck", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    while(game ->running()) {

        timer->Tick();

        if(timer->delta_time() >= 1 / timer->get_frame_rate()) {
            //Not changing delta_time when using reset()
            timer->Reset();
            //std::cout << timer->delta_time() << std::endl;

            game->handle_exit_event();
            game->update();
            game->render();
        }
    }

    game->clean();
    EngineUtils::Timer::Release();
    return 0;
}