#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/handle_key_events.h"

int main() {
  sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Application");
  sf::CircleShape shape;
  shape.setRadius(40.f);
  shape.setPosition((window.getSize().x / 2.f) - shape.getRadius(), (window.getSize().y / 2.f) - shape.getRadius());
  shape.setFillColor(sf::Color::Cyan);

  while (window.isOpen()) {
    sf::Event event{};

    while (window.pollEvent(event)) {
      switch (event.type) {
        case sf::Event::Closed:
          window.close();
          break;
        case sf::Event::KeyPressed:
          handleKeyEvent(event);
          break;
        default:
          break;
      }
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear();
    window.draw(shape);
    window.display();
  }
}
