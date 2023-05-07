#include "Engine.h"

Engine::Engine()
{
    window.create(sf::VideoMode(320, 320), "SFML works!", sf::Style::Default);
    shape.setRadius(160.0f);
    shape.setFillColor(sf::Color::Green);

    font.loadFromFile("resources/font/Roboto-Light.ttf");
    text.setFont(font);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Red);
    text.setString("Sample Text");
    text.setPosition(0, 0);
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
        window.draw(text);
        window.display();
    }
}
