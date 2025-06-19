#include "header.h"
int main() {
  Games gamesList;

  int choice{0};
  do {
    std::cout << "\n ---------------------------\n"
              << "| Enter your choice         |\n"
              << "|---------------------------|\n"
              << "| 1. Add Game               |\n"
              << "| 2. Change Hours Played,   |\n"
              << "|    Rating, Title, Genre   |\n"
              << "| 3. Display Games          |\n"
              << "| 4. Exit                   |\n"
              << " ---------------------------\n"
              << "Enter your choice: " << std::endl;
    std::cin >> choice;
    switch (choice) {
      case 1: {
        char *title = new char[30];
        title = gameNameInput();
        std::string genre = gameGenreInput();
        int rating = gameRatingInput();
        int hoursPlayed = gameHoursPlayedInput();
        gamesList.addGame(title, genre, rating, hoursPlayed);
        break;
      }
      case 2: {
        std::cout << "\n -----------------------\n"
                  << "|Change- 1. Title       |\n"
                  << "|        2. Genre       |\n"
                  << "|        3. Rating      |\n"
                  << "|        4. Hours Played|\n"
                  << "--------------------" << std::endl;
        int changeChoice{0};
        std::cout << "Enter the Choice: ";
        std::cin >> changeChoice;
        char *title = gameNameInput();
        switch (changeChoice) {
          case 1:
            gamesList.changeTitle(title);
            break;
          case 2: {
            std::string genre = gameGenreInput();
            gamesList.changeGenre(title, genre);
            break;
          }
          case 3:
            gamesList.incRating(title);
            break;
          case 4:
            gamesList.incHoursPlayed(title);
            break;
        }
        break;
      }
      case 3:
        gamesList.displayGames();
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