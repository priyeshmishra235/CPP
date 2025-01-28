#include <iostream>
#include <string>

class Player {
 private:
  // Private member variables for encapsulation
  std::string name;
  int health;
  int xp;

 public:
  /**
   * Alternative Implementation:
   * Instead of delegation, the default constructor could directly initialize
   * the member variables: Player() : name{"None"}, health{0}, xp{0} { std::cout
   * << "No-args constructor" << std::endl;
   *   }
   */
  Player();

  /**
   * Alternative Implementation:
   *   Player(std::string name_val) : name{name_val}, health{0}, xp{0} {
   *       std::cout << "One-arg constructor" << std::endl;
   *   }
   */
  Player(std::string name_val);

  /**
   * Alternative Implementation:
   * This constructor could also be implemented inline in the class definition,
   * like so: Player(std::string name_val, int health_val, int xp_val) :
   * name{name_val}, health{health_val}, xp{xp_val} { std::cout << "Three-args
   * constructor" << std::endl;
   *   }
   */
  Player(std::string name_val, int health_val, int xp_val);
};

// Definitions of the constructors

Player::Player() : Player{"None", 0, 0} {
  std::cout << "No-args constructor" << name << std::endl;
}

Player::Player(std::string name_val) : Player{name_val, 0, 0} {
  std::cout << "One-arg constructor" << name << std::endl;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
  std::cout << "Three-args constructor" << name << std::endl;
}

int main() {
  Player empty;
  Player frank{"Frank"};
  Player villain{"Villain", 100, 55};

  return 0;
}