#include <iostream>
#include <string>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x{100}, y{200};
  std::cout << "\nx: " << x << std::endl;
  std::cout << "y: " << y << std::endl;

  swap(&x, &y);

  std::cout << "\nx: " << x << std::endl;
  std::cout << "y: " << y << std::endl;

  std::cout << std::endl;
  return 0;
}