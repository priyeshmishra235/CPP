#include <iostream>
#include <vector>

int main() {
  std::cout << "P - Print numbers\n"
            << "A - Add a number\n"
            << "M - Display mean of the numbers\n"
            << "S - Display the smallest number\n"
            << "L - Display the largest number\n"
            << "F - Find a number\n"
            << "C - Empty the vector\n"
            << "Q - Quit\n\n";

  std::vector<int> numbers{23, -15, 0, 0, 0, 0, -1, 567, -678};

  while (true) {
    char choice;
    std::cout << "Enter the choice: ";
    std::cin >> choice;
    switch (choice) {
    case ('p'):
    case ('P'): {
      std::cout << "Numbers:" << "[";
      for (int num : numbers)
        std::cout << num << " ";
      std::cout << "]" << std::endl;
      if (numbers.size() == 0)
        std::cout << "Vector is empty!" << std::endl;
      break;
    }

    case ('a'):
    case ('A'): {
      std::cout << "Enter the number you want to insert: ";
      int temp{0};
      std::cin >> temp;
      numbers.push_back(temp);
      break;
    }

    case ('m'):
    case ('M'): {
      int sum{0};
      std::cout << "\nAverage of numbers in vectors: ";
      std::size_t size{numbers.size()};
      for (int n : numbers) {
        sum += n;
      }
      int avg{sum / static_cast<int>(size)};
      std::cout << avg << " " << sum << " " << size;
      break;
    }

    case ('s'):
    case ('S'): {
      int smallest{0};
      for (int n{0}; n < numbers.size(); n++) {
        if (smallest > numbers.at(n))
          smallest = numbers.at(n);
      }
      std::cout << "Smallest number in the vector is: " << smallest
                << std::endl;
      break;
    }

    case ('l'):
    case ('L'): {
      int largest{0};
      for (int i{0}; i < numbers.size(); i++) {
        if (largest < numbers.at(i))
          largest = numbers.at(i);
      }
      std::cout << "\nLargest number in the vector is: " << largest
                << std::endl;
      break;
    }

    case ('f'):
    case ('F'): {
      int searchNum{0}, foundTimes{0};
      std::cin >> searchNum;
      for (int num : numbers) {
        if (searchNum == num) {
          ++foundTimes;
        }
      }
      if (foundTimes == 0)
        std::cout << "No match found!" << std::endl;
      else
        std::cout << searchNum << "'s match found " << foundTimes << " times."
                  << std::endl;
      break;
    }

    case ('c'):
    case ('C'): {
      std::cout << "Do you want to empty the vector? Y/n: " << std::endl;
      char clearChoice{};
      std::cin >> clearChoice;
      if (clearChoice == 'Y' || clearChoice == 'y')
        numbers.clear();
      else if (clearChoice == 'n' || clearChoice == 'N')
        break;
      break;
    }

    case ('q'):
    case ('Q'): {
      std::cout << "Goodbye!";
      return 0;
    }

    default: {
      std::cout << "Invalid Input!" << std::endl;
      break;
    }
    }
  }
}
