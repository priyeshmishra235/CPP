#include <iostream>

void double_data(int *int_ptr) { *int_ptr *= 2; }

int main() {
  int value{10};
  int *int_ptr{nullptr};

  std::cout << "Value: " << value << std::endl;
  double_data(&value);
  std::cout << "Value: " << value << std::endl;

  std::cout << "-----------------------------" << std::endl;
  int_ptr = &value;
  double_data(int_ptr);
  std::cout << "Value: " << value << std::endl;

  std::cout << std::endl;
  return 0;
}