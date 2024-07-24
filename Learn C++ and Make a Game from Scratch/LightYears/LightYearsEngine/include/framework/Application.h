#pragma once
#include <SFML/Graphics.hpp>
#include "framework/Core.h"

namespace ly{
	class World;
	class Application {

	public:
		Application();
		void Run();

		template<typename WorldType> //can't be on cpp file 
		weak<WorldType> LoadWorld();
	private:

		void TickInternal(float deltaTime);
		void RenderInternal();

		virtual void Render();
		virtual void Tick(float deltaTime);
		

		//m - member variable
		sf::RenderWindow mWindow;
		//frame counter
		float mTargetFrameRate{};
		//time setter
		sf::Clock mTickClock;

		shared <World> currentWorld;
	};

	template<typename WorldType> //can't be on cpp file 
	weak<WorldType> Application::LoadWorld() {
		shared<WorldType> newWorld{ new WorldType{this} };
		/*This is the creation of a new WorldType object using the new operator, which passes a pointer to the current 
		Application object (this) as a constructor parameter.
		*/
		currentWorld = newWorld;
		return newWorld;
	}
}