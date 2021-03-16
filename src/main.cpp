#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/handle_key_events.h"

int main() {
  sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML Application");

  sf::Texture texture;
  if (!texture.loadFromFile("assets/character.png")) {
    std::cerr << "failed to load image" << std::endl;
    exit(1);
  }

  sf::Sprite sprite;
  sprite.setTexture(texture);

  sprite.scale(sprite.getScale().x * 10.f, sprite.getScale().y * 10.f);
  sprite.setPosition(
    (window.getSize().x / 2.f) - sprite.getGlobalBounds().width / 2.f,
    (window.getSize().y / 2.f) - sprite.getGlobalBounds().height / 2.f
    );

  while (window.isOpen()) {
    sf::Event event{};

    while (window.pollEvent(event)) {
      switch (event.type) {
        case sf::Event::Closed:
          window.close();
          break;
        case sf::Event::KeyPressed:
          handleKeyEvent(event, &sprite);
          break;
        default:
          break;
      }
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear();
    window.draw(sprite);
    window.display();
  }
}
