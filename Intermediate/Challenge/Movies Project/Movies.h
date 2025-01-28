#pragma once
#include <vector>

#include "Movie.h"

class Movies {
 private:
  std::vector<Movie> movies;

 public:
  Movies();
  ~Movies();
  bool addMovie(std::string movieName, std::string movieRating,
                int movieWatchCount);
  bool incWatchcount(std::string movieName);
  void displayMovies();
};