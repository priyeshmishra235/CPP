#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

#include "Other_class.h"
class Friend_class;

class Player {
  friend void Other_class::display_player(
      Player &p);  // a function of other class is a friend of this class
  friend void display_player(
      Player &p);  // a function of this class is a friend of this class
  friend class Friend_class;  // a whole class is a friend of this class
 private:
  static int num_players;  // to keep count of number of active player objects
  std::string name;
  int health;
  int xp;

 public:
  std::string get_name() { return name; }
  int get_health() { return health; }
  int get_xp() { return xp; }
  Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
  // Copy constructor
  Player(const Player &source);
  // Destructor
  ~Player();

  static int get_num_players();  // only static function can access only static
                                 // objects of a class
};

#endif  // _PLAYER_H_
