#pragma once
#include <SFML/Graphics.hpp>

namespace ly{

	class Application {

	public:
		Application();
		void Run();

	private:

		void Tick(float deltaTime);
		void Render();

		//m - member variable
		sf::RenderWindow mWindow;
		//frame counter
		float mTargetFrameRate{};
		//time setter
		sf::Clock mTickClock;
	};
}