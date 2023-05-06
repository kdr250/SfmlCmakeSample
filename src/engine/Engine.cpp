#include "Engine.h"

Engine::Engine()
{
  window.create(sf::VideoMode(320, 320), "SFML works!", sf::Style::Default);
  shape.setRadius(160.0f);
  shape.setFillColor(sf::Color::Green);
}

void Engine::run()
{
  while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}
