#include "Movies.h"

#include <iostream>

bool Movies::addMovie(std::string movieName, std::string movieRating,
                      int movieWatchCount) {
  for (const auto &movie : movies) {
    if (movie.getName() == movieName) {
      std::cout << "Error: " << "Movie with this name already exists"
                << std::endl;
      return false;
    }
  }
  Movie temp{movieName, movieRating, movieWatchCount};
  movies.push_back(temp);
  std::cout << "Movie added successfully" << std::endl;
  return true;
}
bool Movies::incWatchcount(std::string movieName) {
  for (auto &movie : movies) {
    if (movie.getName() == movieName) {
      movie.setWatchCount(movie.getWatchCount() + 1);
      std::cout << "Watch count increased by 1" << std::endl;
      return true;
    }
  }
  std::cout << "Error: " << movieName << " movie not found" << std::endl;
  return false;
}
void Movies::displayMovies() {
  if (movies.empty()) {
    std::cout << "------------------------" << std::endl
              << "| Movies List is empty |" << std::endl
              << "------------------------" << std::endl;
    return;
  }
  std::cout << "---------------" << std::endl
            << "| Movies List |" << std::endl
            << "---------------" << std::endl;
  std::cout << "========================" << std::endl;
  for (const auto &movie : movies) {
    int serialNumber{1};
    std::cout << "S.No.: " << serialNumber++ << std::endl;
    std::cout << "Movies Name: " << movie.getName() << std::endl
              << "Movie Rating: " << movie.getRating() << std::endl
              << "Movie Watchcount: " << movie.getWatchCount() << std::endl
              << "========================" << std::endl;
  }
}
Movies::~Movies() {}

Movies::Movies() {}