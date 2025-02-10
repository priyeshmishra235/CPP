#include "Games.h"

bool Games::addGame(char *getTitle, std::string getGenre, int getRating,
                    int getHoursPlayed) {
  for (const auto &game : games) {
    if (*getTitle == game.getTitle()) {
      std::cout << "Game with this name already exists\n";
      return false;
    }
  }
  Game temp{getTitle, getGenre, getRating, getHoursPlayed};
  games.push_back(temp);
  std::cout << "Game successfully added\n";
  return true;
}
bool Games::incHoursPlayed(char *getTitle) {
  for (auto &game : games) {
    if (*getTitle == game.getTitle()) {
      int incAmt{0};
      std::cout << "Enter hours to increase: ";
      std::cin >> incAmt;
      game.setHoursPlayed(game.getHoursPlayed() + incAmt);
      std::cout << "Played hour increased by " << incAmt << " hours\n";
      return true;
    }
  }
}
bool Games::incRating(char *getTitle) {
  for (auto &game : games) {
    if (*getTitle == game.getTitle()) {
      int newRating{0};
      std::cout << "Enter new rating: ";
      std::cin >> newRating;
      game.setRating(newRating);
      std::cout << "Rating successfully updated\n";
    }
  }
}
void Games::displayGames() {
  if (games.empty()) {
    std::cout << "------------------------" << std::endl
              << "| Games List is empty  |" << std::endl
              << "------------------------" << std::endl;
    return;
  }
  std::cout << "---------------" << std::endl
            << "| Games List  |" << std::endl
            << "---------------" << std::endl;
  std::cout << "========================" << std::endl;
  for (const auto &game : games) {
    int serialNumber{0};
    std::cout << "S.No: " << serialNumber++ << "\nTitle: " << game.getTitle()
              << "\nGenre: " << game.getGenre()
              << "\nHours Played: " << game.getHoursPlayed()
              << "====================";
  }
}
Games::Games() {}
Games::~Games() {}