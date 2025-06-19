#include "movies/Movie.h"

void Movie::setName(std::string movieName) { name = movieName; }
void Movie::setRating(std::string movieRating) { rating = movieRating; }
void Movie::setWatchCount(int movieWatchCount) { watchCount = movieWatchCount; }

Movie::Movie(std::string movieName, std::string movieRating,
             int movieWatchCount)
    : name{movieName}, rating{movieRating}, watchCount{movieWatchCount} {};
Movie::~Movie() {}
