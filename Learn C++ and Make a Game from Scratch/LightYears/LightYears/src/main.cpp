#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow renderWindow(sf::VideoMode(200, 200), "SFML works!");
    

    while (renderWindow.isOpen())
    {
        sf::Event windowEvent;
        while (renderWindow.pollEvent(windowEvent))
        {
            if (windowEvent.type == sf::Event::Closed)
                renderWindow.close();
        }

        renderWindow.clear();
        renderWindow.display();
    }

    return 0;
}