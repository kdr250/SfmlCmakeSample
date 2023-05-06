#pragma once

#include <SFML/Graphics.hpp>

class Engine 
{
private:
  sf::RenderWindow window;
  sf::CircleShape shape;

public:
  Engine();

  void run();
};
