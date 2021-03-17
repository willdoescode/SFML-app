#include "../include/handle_key_events.h"
#include <SFML/Graphics.hpp>


void handleKeyPress(bool* w, bool* a, bool* s, bool* d, sf::Event event) {
  if (event.key.code == sf::Keyboard::W) *w = true;
  if (event.key.code == sf::Keyboard::A) *a = true;
  if (event.key.code == sf::Keyboard::S) *s = true;
  if (event.key.code == sf::Keyboard::D) *d = true;
};
void handleKeyRelease(bool* w, bool* a, bool* s, bool* d, sf::Event event) {
  if (event.key.code == sf::Keyboard::W) *w = false;
  if (event.key.code == sf::Keyboard::A) *a = false;
  if (event.key.code == sf::Keyboard::S) *s = false;
  if (event.key.code == sf::Keyboard::D) *d = false;
};
