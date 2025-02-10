#pragma once

#include "Games.h"

std::string trim(const std::string &str) {
  size_t start = str.find_first_not_of(" \t\n\r");
  if (start == std::string::npos) return "";
  size_t end = str.find_last_not_of(" \t\n\r");
  return str.substr(start, end - start + 1);
}
std::string gameNameInput(Games &gameList) {
  std::string getGameName{};
  do {
    std::cout << "\nEnter Game Name: ";
    std::cin.ignore();
    std::getline(std::cin, getGameName);
    getGameName = trim(getGameName);
  } while (getGameName.empty() ||
           getGameName.find_first_not_of(" \t") == std::string::npos);
  return getGameName;
}
std::string gameRatingInput(Games &gameList) {
  std::string getGameRating{};
  do {
    std::cout << "Enter Movie Rating (PG-13, R, PG, G, NC-17): ";
    std::getline(std::cin, getGameRating);
    getGameRating = trim(getGameRating);
  } while (getGameRating.empty() ||
           getGameRating.find_first_not_of(" \t") == std::string::npos ||
           getGameRating != "PEGI 3" && getGameRating != "PEGI 7" &&
               getGameRating != "PEGI 12" && getGameRating != "PEGI 16" &&
               getGameRating != "PEGI 18");
  return getGameRating;
}
std::string gameGenreInput(Games &gameList) {
  std::string getGameGenre{};
  do {
    std::cout << "\nEnter Genre: ";
    std::cin.ignore();
    std::getline(std::cin, getGameGenre);
    getGameGenre = trim(getGameGenre);

  } while (getGameGenre.empty() ||
           getGameGenre.find_first_not_of(" \t") == std::string::npos);
  return getGameGenre;
}
int gameHoursPlayedInput(Games &gameList) {
  int getGameHoursPlayed{0};
  do {
    std::cout << "Enter Hours Played: ";
    std::cin >> getGameHoursPlayed;
  } while (!isdigit(getGameHoursPlayed) && getGameHoursPlayed < 0);
  std::cout << std::endl;
  return getGameHoursPlayed;
}