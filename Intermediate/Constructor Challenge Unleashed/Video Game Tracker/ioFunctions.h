#pragma once
#include "Games.h"

std::string gameNameInput(Games &gameList);
std::string gameRatingInput(Games &gameList);
std::string gameGenreInput(Games &gameList);
int gameHoursPlayedInput(Games &gameList);
std::string trim(const std::string &str);