#include <iostream>
#include <vector>

void displayMenu();
void print(const std::vector<int> &numbers);
void addNumber(std::vector<int> &numbers);
void clear(std::vector<int> &numbers);
void mean(std::vector<int>);
void smallest(std::vector<int>);
void largest(std::vector<int>);

int main() {
  std::vector<int> numbers{};
  char selection{};
  do {
    displayMenu();
    std::cin >> selection;
    switch (tolower(selection)) {
      case ('p'): {
        print(numbers);
        break;
      }
      case ('a'): {
        addNumber(numbers);
        break;
      }
      case ('c'): {
        clear(numbers);
        break;
      }
      case ('m'): {
        mean(numbers);
        break;
      }
      case ('s'): {
        smallest(numbers);
        break;
      }
      case ('l'): {
        largest(numbers);
        break;
      }
      case ('q'): {
        std::cout << "Goodbye" << std::endl;
        break;
      }
      default: {
        std::cout << "Unknown selection. Try again.";
        break;
      }
    }
  } while (selection != 'q');

  std::cout << std::endl;
  return 0;
}
void displayMenu() {
  std::cout << "\nP - Print numbers" << std::endl
            << "A - Add a number" << std::endl
            << "M - Display mean of the numbers" << std::endl
            << "S - Display the smallest number" << std::endl
            << "L - Display the largest number" << std::endl
            << "Q - Quit" << std::endl
            << "\nEnter your choice: ";
}
void print(const std::vector<int> &numbers) {
  if (numbers.size() == 0)
    std::cout << "[] - the list is empty" << std::endl;
  else {
    std::cout << "[ ";
    for (auto num : numbers) std::cout << num << " ";
    std::cout << "]" << std::endl;
  }
}
void addNumber(std::vector<int> &numbers) {
  int num_to_add{};
  std::cout << "Enter an integer to add to the list: ";
  std::cin >> num_to_add;
  numbers.push_back(num_to_add);
  std::cout << num_to_add << " added" << std::endl;
}
void clear(std::vector<int> &numbers) {
  if (numbers.size() == 0)
    std::cout << "List is already empty" << std::endl;
  else {
    numbers.clear();
    std::cout << "List elements cleared";
  }
}
void mean(std::vector<int> numbers) {
  if (numbers.size() == 0)
    std::cout << "Unable to calculate mean - no data" << std::endl;
  else {
    int total{};
    for (auto num : numbers) total += num;
    std::cout << "The mean is : " << static_cast<double>(total) / numbers.size()
              << std::endl;
  }
}
void smallest(std::vector<int> numbers) {
  if (numbers.size() == 0)
    std::cout << "Unable to determine the smallest - list is empty"
              << std::endl;
  else {
    int smallest = numbers.at(0);
    for (auto num : numbers)
      if (num < smallest) smallest = num;
    std::cout << "The smallest number is: " << smallest << std::endl;
  }
}
void largest(std::vector<int> numbers) {
  if (numbers.size() == 0)
    std::cout << "Unable to determine largest - list is empty" << std::endl;
  else {
    int largest = numbers.at(0);
    for (auto num : numbers)
      if (num > largest) largest = num;
    std::cout << "The largest number is: " << largest << std::endl;
  }
}