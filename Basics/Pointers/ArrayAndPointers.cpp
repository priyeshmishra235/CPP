#include <iostream>

int main() {
  int scores[]{100, 95, 89};

  std::cout << "Value of scores: " << scores << std::endl;

  int *score_ptr{scores};
  std::cout << "Value of score_ptr: " << score_ptr << std::endl;

  std::cout << "\nArray subscript notation -------------------------"
            << std::endl;
  std::cout << scores[0] << std::endl;
  std::cout << scores[1] << std::endl;
  std::cout << scores[2] << std::endl;

  std::cout << "\nPointer subscript notation -------------------------"
            << std::endl;
  std::cout << score_ptr[0] << std::endl;
  std::cout << score_ptr[1] << std::endl;
  std::cout << score_ptr[2] << std::endl;

  std::cout << "\nPointer offset notation-------------------------"
            << std::endl;
  std::cout << *score_ptr << std::endl;
  std::cout << *(score_ptr + 1) << std::endl;
  std::cout << *(score_ptr + 2) << std::endl;

  std::cout << "\nArray offset notation-------------------------" << std::endl;
  std::cout << *scores << std::endl;
  std::cout << *(scores + 1) << std::endl;
  std::cout << *(scores + 2) << std::endl;

  std::cout << std::endl;
  return 0;
}
