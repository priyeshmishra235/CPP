#include "headers.h"
int main() {
  Movies movieslist;
  int choice{0};
  do {
    std::cout << " ---------------------------" << std::endl
              << "| Enter your choice         |" << std::endl
              << "|---------------------------|" << std::endl
              << "| 1. Add Movie              |" << std::endl
              << "| 2. Increase Watch Count   |" << std::endl
              << "| 3. Display Movies         |" << std::endl
              << "| 4. Exit                   |" << std::endl
              << " ---------------------------" << std::endl
              << "Enter your choice: " << std::endl;
    std::cin >> choice;
    switch (choice) {
    case 1: {
      std::string name = movieNameInput(movieslist);
      std::string rating = movieRatingInput(movieslist);
      int watchCount = movieWatchCountInput(movieslist);
      movieslist.addMovie(name, rating, watchCount);
      break;
    }
    case 2: {
      std::string name = movieNameInput(movieslist);
      movieslist.incWatchcount(name);
      break;
    }
    case 3:
      movieslist.displayMovies();
      break;
    case 4:
      std::cout << "Exit" << std::endl;
      break;
    default:
      std::cout << "Enter valid choice";
    }
  } while (choice != 4);
  return 0;
}
