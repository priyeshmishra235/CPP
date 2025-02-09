#include <iostream>
int main() {
  int n{9};
  for (int i{0}; i < n; i++) {
    for (int j{0}; j < n; j++) {
      if (n / 2 == i)
        std::cout << "*";
      else if (n / 2 == j)
        std::cout << "*";
      else
        std::cout << " ";
    }
    std::cout << "\n";
  }
}