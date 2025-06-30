#include <iostream>

int main() {
  int array1[5];             // size defined,but garbage value
  int array2[5] = {0, 2, 2}; // c-like initialization, unititialized
  // are default to zero
  int array3[10]{23, 54, 23, 12, 23}; // size predefined, list initialization,
  // unititialized default to zero
  int array4[]{54, 23, 12, 23}; // size automatically calculated
  int array5[10]{0};            // first = 0, rest default to 0, so all 0

  char array6[10]{'a', 'b', 'c', 'd'}; // unititialized will be null

  int multiDim[2][4]{// 2 rows, 4 columns
                     {2, 3, 4, 5},
                     {6, 7, 8, 9}};

  for (int i{0}; i < 5; i++) {
    std::cout << "array1 element" << i << "is " << array1[i] << std::endl;
  }
  std::cout << std::endl;
  for (int i{0}; i < 5; i++) {
    std::cout << "array2 element" << i << "is " << array2[i] << std::endl;
  }
  std::cout << std::endl;
  for (int i{0}; i < 10; i++) {
    std::cout << "array3 element" << i << "is " << array3[i] << std::endl;
  }
  std::cout << std::endl;
  for (int i{0}; i < 4; i++) {
    std::cout << "array4 element" << i << "is " << array4[i] << std::endl;
  }
  std::cout << std::endl;
  for (int i{0}; i < 10; i++) {
    std::cout << "array5 element" << i << "is " << array5[i] << std::endl;
  }
  std::cout << std::endl;
  for (int i{0}; i < 10; i++) {
    std::cout << "array6 element" << i << "is " << array6[i] << std::endl;
  }
  std::cout << std::endl;
  for (int i{0}; i < 2; i++) {
    for (int j{0}; j < 4; j++) {
      std::cout << "multiDim element " << i << "," << j << "is "
                << multiDim[i][j] << std::endl;
    }
  }
  return 0;
}
