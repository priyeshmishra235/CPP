#include <iostream>
#include <string>

#include "Friend_class.cpp"
#include "Other_class.cpp"
#include "Player.cpp"

void display_player(Player &p) {
  std::cout << p.name << std::endl;
  std::cout << p.health << std::endl;
  std::cout << p.xp << std::endl;
}

using namespace std;

int main() {
  Player hero{"Hero", 100, 35};
  display_player(hero);

  Other_class other;
  other.display_player(hero);

  Friend_class friend_class;
  friend_class.set_hero_name(hero, "SUPER HERO");
  friend_class.display_player(hero);

  return 0;
}
