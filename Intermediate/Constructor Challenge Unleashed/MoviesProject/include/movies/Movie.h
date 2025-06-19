#pragma once
#include <string>
class Movie {
 private:
  std::string name;
  std::string rating;
  int watchCount{0};

 public:
  std ::string getName() const { return name; }
  std::string getRating() const { return rating; }
  int getWatchCount() const { return watchCount; }

  void setName(std::string movieName);
  void setRating(std::string movieRating);
  void setWatchCount(int movieWatchCount);

  Movie(std::string movieName, std::string movieRating, int movieWatchCount);

  ~Movie();
};
