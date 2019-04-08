//
// Created by nikkadog on 14.03.19.
//

#ifndef ARCADEGAME_INPUTMANAGER_H
#define ARCADEGAME_INPUTMANAGER_H

namespace InputUtils {

    class InputManager {

    private:
        static InputManager *sInstance;


    public:
        static InputManager *Instance();

        static void Release();



    private:
        explicit InputManager();
        ~InputManager();

    };
}

#endif //ARCADEGAME_INPUTMANAGER_H
