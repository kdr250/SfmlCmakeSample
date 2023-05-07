#pragma once

#include <SFML/Graphics.hpp>

class Engine
{
private:
    sf::RenderWindow window;
    sf::CircleShape shape;

    sf::Font font;
    sf::Text text;

public:
    Engine();

    void run();
};
