#include "Game.h"

void Game::setTitle(char getTitle) { *title = getTitle; }
void Game::setGenre(std::string getGenre) { genre = getGenre; };
void Game::setRating(int getRating) { rating = getRating; }
void Game::setHoursPlayed(int getHoursPlayed) { hoursPlayed = getHoursPlayed; }

Game::Game() : Game{title, "GenreNotSet", 0, 0} {}
Game::Game(char *getTitle, std::string getGenre, int getRating,
           int getHoursPlayed)
    : title{getTitle},
      genre{getGenre},
      rating{getRating},
      hoursPlayed{getHoursPlayed} {}
Game::Game(const Game &source)
    : genre{source.genre},
      rating{source.rating},
      hoursPlayed{source.hoursPlayed} {
  title = new char[strlen(source.title) + 1];
  *title = *source.title;
  // std::strcpy(title,source.title); // try this see what happens
  std::cout << "Copy constructor deep\n";
}
Game::Game(Game &&source)
    : title{source.title},
      genre{source.genre},
      rating{source.rating},
      hoursPlayed{source.hoursPlayed} {
  source.title = nullptr;
  source.genre = nullptr;
  source.rating = 0;
  source.hoursPlayed = 0;
  std::cout << "Move constructor\n";
}
Game &Game::operator=(const Game &rhs) {
  std::cout << "Copy assignment\n";
  if (this == &rhs) return *this;
  delete[] this->title;
  title = new char[std::strlen(rhs.title) + 1];
  std::strcpy(this->title, rhs.title);
  return *this;
}
Game &Game::operator=(Game &&rhs) {
  std::cout << "Deep assignment\n";
  if (this == &rhs) return *this;
  delete[] title;
  title = rhs.title;
  rhs.title = nullptr;
  return *this;
}
Game::~Game() {
  std::cout << "Destructor called";
  delete[] title;
}