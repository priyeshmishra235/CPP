#include <iostream>
#include <vector>

void print(std::vector<int> &numbers);
void addNumber(std::vector<int> &numbers);
void clear(std::vector<int> &numbers);
void mean(std::vector<int>);
void smallest(std::vector<int>);
void largest(std::vector<int>);

int main() {
  std::vector<int> numbers{};
  char selection{};

  do {
    // Display menu
    std::cout << "\nP - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display mean of the numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - Display the largest number" << std::endl;
    std::cout << "Q - Quit" << std::endl;
    std::cout << "\nEnter your choice: ";
    std::cin >> selection;

    if (selection == 'P' || selection == 'p') {
      print(numbers);
    } else if (selection == 'A' || selection == 'a') {
      addNumber(numbers);
    } else if (selection == 'M' || selection == 'm') {
      mean(numbers);
    } else if (selection == 'S' || selection == 's') {
      smallest(numbers);
    } else if (selection == 'L' || selection == 'l') {
      largest(numbers);
    } else if (selection == 'Q' || selection == 'q') {
      std::cout << "Goodbye" << std::endl;
    } else if (selection == 'C' || selection == 'c') {
      clear(numbers);
    } else {
      std::cout << "Unknown selection, please try again" << std::endl;
    }
  } while (selection != 'q' && selection != 'Q');

  std::cout << std::endl;
  return 0;
}

void print(std::vector<int> &numbers) {
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
  numbers.clear();
  std::cout << "List elements cleared";
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