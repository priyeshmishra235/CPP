#include <iostream>
#include <ostream>
#include <vector>
int main() {
  std::vector<int> numbers{23, 4, 23, -234, -32, 0, -24, 245, 456, -248, 67};
  std::cout << "P - Print numbers\n"
            << "A - Add a number\n"
            << "M - Display mean of the numbers\n"
            << "S - Display the smallest number\n"
            << "L - Display the largest number\n"
            << "F - Find a number\n"
            << "C - Empty the vector\n"
            << "Q - Quit\n\n";
  while (true) {
    char input{};
    std::cout << "Enter the option: " << std::endl;
    std::cin >> input;
    switch (input) {
    case 'p': {
      if (numbers.size() != 0) {
        std::cout << "Number in the vector are: " << std::endl;
        std::cout << "{ ";
        for (int num : numbers) {
          std::cout << num << ", ";
        }
        std::cout << " }" << std::endl;
      } else {
        std::cout << "vector is empty" << std::endl;
      }
    }
    case 'a': {
      std::cout << "Enter the number you want to insert: ";
      int usrInput;
      std::cin >> usrInput;
      numbers.push_back(usrInput);
      std::cout << "usrInput inserted" << std::endl;
    }
    case 'm': {
    }
    }
  }
  return 0;
}
