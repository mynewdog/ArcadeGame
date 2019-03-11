//
// Created by mynewdog on 11.03.19.
//

#include "Timer.h"

namespace EngineUtils {
    Timer *Timer::sInstance = nullptr;

    Timer *Timer::Instance() {

        if (sInstance == nullptr) {
            sInstance = new Timer();
        }
        return sInstance;
    }

    void Timer::Release() {
        delete sInstance;
        //No dangling pointer
        sInstance = nullptr;
    }

    Timer::Timer() {
        Reset();
        mTimeScale = 1.0f;
        mDeltaTime = std::chrono::duration<float>(0.0f);
    }

    Timer::~Timer() {
        std::cout << "Timer destroyed" << std::endl;
    }

    void Timer::Reset() {
        mStartTime = std::chrono::system_clock::now();
    }

    float Timer::deltaTime() {
        return mDeltaTime.count();
    }

    void Timer::TimeScale(float t) {
        mTimeScale = t;
    }

    float Timer::TimeScale() {
        return mTimeScale;
    }

    void Timer::Tick() {
        mDeltaTime = std::chrono::system_clock::now() - mStartTime;
    }

    float Timer::getFrameRate() {
        return frameRate;
    }
}