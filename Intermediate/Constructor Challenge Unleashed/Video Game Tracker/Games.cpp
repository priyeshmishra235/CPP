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
bool Games::changeTitle(char *getTitle) {
  for (auto &game : games) {
    if (*getTitle == game.getTitle()) {
      game.setTitle(getTitle);
      std::cout << "Title changed\n";
      return true;
    }
  }
  return false;
}
bool Games::changeGenre(char *getTitle, std::string genre) {
  for (auto &game : games) {
    if (*getTitle == game.getTitle()) {
      game.setGenre(genre);
      std::cout << "Genre changed\n";
      return true;
    }
  }
  return false;
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
  return false;
}
bool Games::incRating(char *getTitle) {
  for (auto &game : games) {
    if (*getTitle == game.getTitle()) {
      int newRating{0};
      std::cout << "Enter new rating: ";
      std::cin >> newRating;
      game.setRating(newRating);
      std::cout << "Rating successfully updated\n";
      return true;
    }
  }
  return false;
}
void Games::displayGames() {
  if (games.empty()) {
    std::cout << "\n------------------------\n"
              << "| Games List is empty  |\n"
              << "------------------------" << std::endl;
    return;
  }
  std::cout << "\n---------------\n"
            << "| Games List  |\n"
            << "---------------\n"
            << "========================" << std::endl;
  int serialNumber{1};
  for (const auto &game : games) {
    std::cout << "\nS.No: " << serialNumber++ << "\nTitle: " << game.getTitle()
              << "\nGenre: " << game.getGenre()
              << "\nRating: " << game.getRating()
              << "\nHours Played: " << game.getHoursPlayed()
              << "\n====================";
  }
}
std::string trim(const std::string &str) {
  size_t start = str.find_first_not_of(" \t\n\r");
  if (start == std::string::npos)
    return "";
  size_t end = str.find_last_not_of(" \t\n\r");
  return str.substr(start, end - start + 1);
}
char *gameNameInput() {
  char *getGameName;
  getGameName = new char[30];
  do {
    std::cout << "\nEnter Game Name: ";
    std::cin.ignore();
    std::cin.getline(getGameName, 30);
  } while (getGameName == nullptr);
  return getGameName;
}
int gameRatingInput() {
  int getGameRating{};
  do {
    std::cout << "Enter Movie Rating (1-10): ";
    std::cin >> getGameRating;
  } while (isalnum(getGameRating) && getGameRating >= 1 && getGameRating <= 10);
  return getGameRating;
}
std::string gameGenreInput() {
  std::string getGameGenre{};
  do {
    std::cout << "\nEnter Genre: ";
    std::getline(std::cin, getGameGenre);
    getGameGenre = trim(getGameGenre);

  } while (getGameGenre.empty() ||
           getGameGenre.find_first_not_of(" \t") == std::string::npos);
  return getGameGenre;
}
int gameHoursPlayedInput() {
  int getGameHoursPlayed{0};
  do {
    std::cout << "Enter Hours Played: ";
    std::cin >> getGameHoursPlayed;
  } while (!isdigit(getGameHoursPlayed) && getGameHoursPlayed < 0);
  std::cout << std::endl;
  return getGameHoursPlayed;
}
Games::Games() {}
Games::~Games() {}
