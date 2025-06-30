#pragma once
#include <ctype.h>

#include <cstring>
#include <iostream>
#include <string>
#include <vector>
class Game {
private:
  char *title;
  std::string genre{};
  int rating{};
  int hoursPlayed{};

public:
  char getTitle() const { return *title; }
  std::string getGenre() const { return genre; }
  int getRating() const { return rating; }
  int getHoursPlayed() const { return hoursPlayed; }

  void setTitle(char *input);
  void setGenre(std::string getGenre);
  void setRating(int getRating);
  void setHoursPlayed(int getHoursPlayed);

  Game();
  Game(char *getTitle, std::string getGenre, int getRating, int getHoursPlayed);

  Game(const Game &source);
  Game(Game &&source);

  Game &operator=(const Game &rhs);
  Game &operator=(Game &&rhs);
  ~Game();
};
