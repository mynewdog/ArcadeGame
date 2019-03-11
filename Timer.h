//
// Created by mynewdog on 11.03.19.
//

#ifndef ARCADEGAME_TIMER_H
#define ARCADEGAME_TIMER_H

#include <chrono>
#include <iostream>


namespace EngineUtils {

    class Timer {

    private:
        static Timer *sInstance;

        std::chrono::system_clock::time_point mStartTime;
        std::chrono::duration<float> mDeltaTime;
        float mTimeScale;
        float frameRate = 60.0f;

    public:
        static Timer *Instance();

        static void Release();

        void Reset();

        float deltaTime();

        void TimeScale(float t = 1.0f);

        float TimeScale();

        void Tick();

        float getFrameRate();



    private:
        Timer();
        ~Timer();


    };


}


#endif //ARCADEGAME_TIMER_H
