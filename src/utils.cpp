#include "../include/utils.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

void loadTexture(sf::Texture* texture, const std::string& file) {
  if (!texture->loadFromFile(file)) {
    std::cerr << "failed to load texture" << std::endl;
    exit(1);
  }
}
