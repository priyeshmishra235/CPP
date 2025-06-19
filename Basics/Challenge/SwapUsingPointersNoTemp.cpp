#include <iostream>

void swap(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
int main() {
  int num1{}, num2{};
  std::cout << "Enter num1: " << std::endl;
  std::cin >> num1;
  std::cout << "Enter num2: " << std::endl;
  std::cin >> num2;
  std::cout << "Numbers before swapping: num1= " << num1 << " num2= " << num2
            << std::endl;
  swap(&num1, &num2);
  std::cout << "Numbers before swapping: num1= " << num1 << " num2= " << num2
            << std::endl;
}