#pragma once
#include "ioFunctions.h"

#include <iostream>

std::string trim(const std::string &str) {
  // Find the first non-whitespace character
  size_t start = str.find_first_not_of(" \t\n\r");
  if (start == std::string::npos) // If no non-whitespace characters, return
                                  // empty string
    return "";
  // Find the last non-whitespace character
  size_t end = str.find_last_not_of(" \t\n\r");
  return str.substr(start, end - start + 1);
}
std::string movieNameInput(Movies &movieslist) {
  std::string getMovieName{};
  do {
    std::cout << "\nEnter Movie Name: ";
    std::cin.ignore();
    std::getline(std::cin, getMovieName);
    getMovieName = trim(getMovieName);
  } while (getMovieName.empty() ||
           getMovieName.find_first_not_of(" \t") == std::string::npos);
  return getMovieName;
}
std::string movieRatingInput(Movies &movieslist) {
  std::string getMovieRating{};
  do {
    std::cout << "Enter Movie Rating (PG-13, R, PG, G, NC-17): ";
    std::getline(std::cin, getMovieRating);
    getMovieRating = trim(getMovieRating);
  } while (getMovieRating.empty() ||
           getMovieRating.find_first_not_of(" \t") == std::string::npos ||
           (getMovieRating != "PG-13" && getMovieRating != "R" &&
            getMovieRating != "PG" && getMovieRating != "G" &&
            getMovieRating != "NC-17"));
  return getMovieRating;
}
int movieWatchCountInput(Movies &movieslist) {
  int getMovieWatchCount{0};
  do {
    std::cout << "Enter Movie Watch Count: ";
    std::cin >> getMovieWatchCount;
  } while (!isdigit(getMovieWatchCount) && getMovieWatchCount < 0);
  std::cout << std::endl;
  return getMovieWatchCount;
}
