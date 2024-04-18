#include "framework/Application.h"
#include <iostream>
#include "framework/Core.h"
#include "framework/World.h"

namespace ly {
	Application::Application()
		:mWindow{ sf::VideoMode(500, 500), "Light Years" },
        mTargetFrameRate{60.f},
        mTickClock{},
        currentWorld{nullptr}
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
            
            float frameDeltaTime = mTickClock.restart().asSeconds();
            //the amount of time that has elapsed
            accumulatedTime += frameDeltaTime;
            //limit frame rate
            while (accumulatedTime > targetDeltaTime)
                 {  accumulatedTime -= targetDeltaTime;
                    TickInternal(targetDeltaTime);    }

             LOG("ticking at framerate: %f", 1.f / frameDeltaTime);
        RenderInternal();
        }

        
	}
    void Application::TickInternal(float deltaTime)
    {
        Tick(deltaTime); 

        if (currentWorld) {
            currentWorld->BeginPlayInternal();
            currentWorld->TickInternal(deltaTime);
        }
    }

    //template function/programming pattern - set up what needs to be done before and after a step
void Application::RenderInternal()
    {
        mWindow.clear();

        Render();

        mWindow.display();
    }
    void Application::Render()
    {
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);
        mWindow.draw(shape);
    }

    void Application::Tick(float deltaTime)
    {

    }
    
}