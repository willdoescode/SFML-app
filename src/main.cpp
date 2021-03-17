#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/handle_key_events.h"
#include "../include/utils.h"
#include <vector>

float SPEED = 10.f;

int main() {
  sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML Application");

  sf::Texture texture;
  loadTexture(&texture, "assets/character.png");

  sf::Sprite sprite;
  sprite.setTexture(texture);

  sprite.scale(sprite.getScale().x * 10.f, sprite.getScale().y * 10.f);
  sprite.setPosition(
    (window.getSize().x / 2.f) - sprite.getGlobalBounds().width / 2.f,
    (window.getSize().y / 2.f) - sprite.getGlobalBounds().height / 2.f
  );
  window.setKeyRepeatEnabled(true);

  sf::Event event{};
  sf::Clock clock;

  std::vector<sf::Keyboard::Key> keys = {};
  bool w = false;
  bool a = false;
  bool s = false;
  bool d = false;

  while (window.isOpen()) {

    while (window.pollEvent(event)) {
      switch (event.type) {
        case sf::Event::Closed:
          window.close();
          break;
        case sf::Event::KeyPressed: {
          handleKeyPress(&w, &a, &s, &d, event);
          if (w) sprite.setPosition(sprite.getPosition().x, sprite.getPosition().y - SPEED);
          if (s) sprite.setPosition(sprite.getPosition().x, sprite.getPosition().y + SPEED);
          if (a) sprite.setPosition(sprite.getPosition().x - SPEED, sprite.getPosition().y);
          if (d) sprite.setPosition(sprite.getPosition().x + SPEED, sprite.getPosition().y);
          break;
        }
        case sf::Event::KeyReleased: {
          handleKeyRelease(&w, &a, &s, &d, event);
          break;
        }
        default:
          break;
      }
    }

    std::cout << "Elapsed time since last frame: " << clock.getElapsedTime().asSeconds() << std::endl;

    clock.restart();
    window.clear();
    window.draw(sprite);
    window.display();
  }
}
