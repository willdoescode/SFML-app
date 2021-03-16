#include "../include/handle_key_events.h"
#include <iostream>
#include <SFML/Graphics.hpp>

void handleKeyEvent(sf::Event event) {
  if (event.key.code == sf::Keyboard::A)
    std::cout << "A" << std::endl;
  if (event.key.code == sf::Keyboard::B)
    std::cout << "B" << std::endl;
  if (event.key.code == sf::Keyboard::C)
    std::cout << "C" << std::endl;
  if (event.key.code == sf::Keyboard::D)
    std::cout << "D" << std::endl;
  if (event.key.code == sf::Keyboard::E)
    std::cout << "E" << std::endl;
  if (event.key.code == sf::Keyboard::F)
    std::cout << "F" << std::endl;
  if (event.key.code == sf::Keyboard::G)
    std::cout << "G" << std::endl;
}
