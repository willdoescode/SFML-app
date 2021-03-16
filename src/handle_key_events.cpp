#include "../include/handle_key_events.h"
#include <iostream>
#include <SFML/Graphics.hpp>

float SPEED = 10.f;

void handleKeyEvent(const sf::Event event, sf::Sprite* sprite) {
  if (event.key.code == sf::Keyboard::A) {
    sprite->setPosition(sprite->getPosition().x - SPEED, sprite->getPosition().y);
    std::cout << "A" << std::endl;
  }
  if (event.key.code == sf::Keyboard::B)
    std::cout << "B" << std::endl;
  if (event.key.code == sf::Keyboard::C)
    std::cout << "C" << std::endl;
  if (event.key.code == sf::Keyboard::D) {
    sprite->setPosition(sprite->getPosition().x + SPEED, sprite->getPosition().y);
    std::cout << "D" << std::endl;
  }
  if (event.key.code == sf::Keyboard::E)
    std::cout << "E" << std::endl;
  if (event.key.code == sf::Keyboard::F)
    std::cout << "F" << std::endl;
  if (event.key.code == sf::Keyboard::G)
    std::cout << "G" << std::endl;
  if (event.key.code == sf::Keyboard::H)
    std::cout << "H" << std::endl;
  if (event.key.code == sf::Keyboard::I)
    std::cout << "I" << std::endl;
  if (event.key.code == sf::Keyboard::J)
    std::cout << "J" << std::endl;
  if (event.key.code == sf::Keyboard::K)
    std::cout << "K" << std::endl;
  if (event.key.code == sf::Keyboard::L)
    std::cout << "L" << std::endl;
  if (event.key.code == sf::Keyboard::M)
    std::cout << "M" << std::endl;
  if (event.key.code == sf::Keyboard::N)
    std::cout << "N" << std::endl;
  if (event.key.code == sf::Keyboard::O)
    std::cout << "O" << std::endl;
  if (event.key.code == sf::Keyboard::P)
    std::cout << "P" << std::endl;
  if (event.key.code == sf::Keyboard::Q)
    std::cout << "Q" << std::endl;
  if (event.key.code == sf::Keyboard::R)
    std::cout << "R" << std::endl;
  if (event.key.code == sf::Keyboard::S) {
    sprite->setPosition(sprite->getPosition().x, sprite->getPosition().y + SPEED);
    std::cout << "S" << std::endl;
  }
  if (event.key.code == sf::Keyboard::T)
    std::cout << "T" << std::endl;
  if (event.key.code == sf::Keyboard::U)
    std::cout << "U" << std::endl;
  if (event.key.code == sf::Keyboard::V)
    std::cout << "V" << std::endl;
  if (event.key.code == sf::Keyboard::W) {
    sprite->setPosition(sprite->getPosition().x, sprite->getPosition().y - SPEED);
    std::cout << "W" << std::endl;
  }
  if (event.key.code == sf::Keyboard::X)
    std::cout << "X" << std::endl;
  if (event.key.code == sf::Keyboard::Y)
    std::cout << "Y" << std::endl;
  if (event.key.code == sf::Keyboard::Z)
    std::cout << "Z" << std::endl;
}
