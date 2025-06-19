#pragma once
#include "Game.h"
class Games {
 private:
  std::vector<Game> games;

 public:
  bool addGame(char *getTitle, std::string getGenre, int getRating,
               int getHoursPlayed);
  bool changeTitle(char *getTitle);
  bool changeGenre(char *getTitle, std::string genre);
  bool incHoursPlayed(char *getTitle);
  bool incRating(char *getTitle);
  void displayGames();
  std::string gameNameInput();
  std::string gameGenreInput();
  int gameRatingInput();
  int gameHoursPlayedInput();
  std::string trim(const std::string &str);

  Games();
  ~Games();
};