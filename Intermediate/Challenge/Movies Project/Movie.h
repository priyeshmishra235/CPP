#pragma once
#include <string>

class Movie {
 private:
  std::string name;
  std::string rating;
  int watchCount{0};

 public:
  std ::string getName() { return name; }
  std::string getRating() { return rating; }
  int getWatchCount() { return watchCount; }
  void setName(std::string movieName);
  void setRating(std::string movieRating);
  void setWatchCount(int movieWatchCount);
};