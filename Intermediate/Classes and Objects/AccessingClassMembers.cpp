#include <iostream>
#include <string>

class Player {
 public:
  // attributes
  std::string name;
  int health;
  int xp;

  // methods
  void talk(std::string text_to_say) {
    std::cout << name << " says " << text_to_say << std::endl;
  }
  bool is_dead();
};

class Account {
 public:
  // attributes
  std::string name;
  double balance;

  // methods
  bool deposit(double bal) {
    balance += bal;
    std::cout << "In deposit" << std::endl;
  }
  bool withdraw(double bal) {
    balance -= bal;
    std::cout << "In withdraw" << std::endl;
  }
};

int main() {
  Account frank_account;
  frank_account.name = "Frank's account";
  frank_account.balance = 5000.0;

  frank_account.deposit(1000.0);
  frank_account.withdraw(500.0);

  Player frank;
  frank.name = "Frank";
  frank.health = 100;
  frank.xp = 12;
  frank.talk("Hi there");

  Player *enemy = new Player;
  (*enemy).name = "Enemy";
  (*enemy).health = 100;
  enemy->xp = 15;

  enemy->talk("I will destroy you!");

  return 0;
}