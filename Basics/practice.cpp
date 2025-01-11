#include <iostream>

int main() {
  int favorite_number = 0;
  std::cout << "Enter a number between 1 and 100: ";
  std::cin >> favorite_number;
  std::cout << "Amazing! That is my favorite number too\nNo, really "
            << favorite_number << " is my favorite number too." << std::endl;
  return 0;
}