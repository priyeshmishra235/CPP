#pragma once
#include "Game.h"
class Games {
 private:
  std::vector<Game> games;

 public:
  Games();
  ~Games();

  bool addGame(char *getTitle, std::string getGenre, int getRating,
               int getHoursPlayed);
  bool incHoursPlayed(char *getTitle);
  bool incRating(char *getTitle);
  void displayGames();
};