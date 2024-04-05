#pragma once
#include <SFML/Graphics.hpp>

namespace ly{

	class Application {

	public:
		Application();
		void Run();

	private:
		//m - member variable
		sf::RenderWindow mWindow;
	};
}