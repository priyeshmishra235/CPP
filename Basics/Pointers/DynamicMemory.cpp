#include <iostream>

int main() {
  int *int_ptr{nullptr};
  int_ptr = new int;                  // allocate the int on the heap
  std::cout << int_ptr << std::endl;  // use it
  delete int_ptr;                     // release it

  size_t size{0};
  double *temp_ptr{nullptr};

  std::cout << "How many temps? ";
  std::cin >> size;

  temp_ptr = new double[size];         // allocate the storage on the heap
  std::cout << temp_ptr << std::endl;  // use it
  delete[] temp_ptr;                   // release it

  std::cout << std::endl;
  return 0;
}
