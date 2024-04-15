#pragma once
#include <SFML/Graphics.hpp>

namespace ly{

	class Application {

	public:
		Application();
		void Run();

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
	};
}