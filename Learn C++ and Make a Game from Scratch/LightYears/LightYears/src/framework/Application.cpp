#include "framework/Application.h"
#include <iostream>

namespace ly {
	Application::Application()
		:mWindow{ sf::VideoMode(500, 500), "Light Years" },
        mTargetFrameRate{60.f},
        mTickClock{}
	{
		
	}
	void Application::Run()
	{
        mTickClock.restart();
        float accumulatedTime = 0.f; // накопичений час
        float targetDeltaTime = 1.f / mTargetFrameRate;

        while (mWindow.isOpen())
        {
            sf::Event windowEvent;
            while (mWindow.pollEvent(windowEvent))
            {
                if (windowEvent.type == sf::Event::Closed)
                    mWindow.close();
            }

        }

        //the amount of time that has elapsed
        accumulatedTime += mTickClock.restart().asSeconds();
        //limit frame rate
        while (accumulatedTime > targetDeltaTime)
        {
            accumulatedTime -= targetDeltaTime;
            Tick(targetDeltaTime);
            Render();
        }
	}
    void Application::Tick(float deltaTime)
    {
        std::cout << "ticking at framerate" << 1.f / deltaTime << std::endl;
    }
    void Application::Render()
    {
    }
}