#include <iostream>
#include <string>

class Player {
 private:
  // attributes
  std::string name{"Player"};
  int health;
  int xp;

 public:
  // methods
  void talk(std::string text_to_say) {
    std::cout << name << " says " << text_to_say << std::endl;
  }
  bool is_dead();
};

int main() {
  Player frank;
  //  frank.name = "Frank"; //cannot change because private
  //  cout << frank.health << endl; //cannot access because private
  frank.talk("Hello there");
  return 0;
}