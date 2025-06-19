#include <iostream>
#include <vector>

int *createArray(size_t size) {
  int *newArray{nullptr};
  newArray = new int[size];
  for (size_t i{0}; i < size; i++) {
    newArray[i] = 0;
  }
  return newArray;
}
void print(const int *array, const size_t size) {
  std::cout << "[ ";
  for (size_t i{0}; i < size; i++) {
    std::cout << array[i] << " ";
  }
  std::cout << "]" << std::endl;
}
void input(int *array, const size_t size) {
  for (size_t i{0}; i < size; i++) {
    std::cout << "Enter the " << i << "th element: ";
    std::cin >> array[i];
  }
}
void sizeInput(std::vector<int> &size) {
  // void sizeInput(std::vector<int> *size) can be used
  int element{0};
  std::cin >> element;
  // size->push_back(element); for changing when using pointer
  size.push_back(element);
}
void product(const int *array1, const int *array2, int *prodArray,
             const std::vector<int> &size) {
  int arr3{0};
  for (size_t arr2{0}; arr2 < size.at(1); arr2++) {
    for (size_t arr1{0}; arr1 < size.at(0); arr1++) {
      prodArray[arr3] = array1[arr1] * array2[arr2];
      ++arr3;
    }
  }
}
int main() {
  int *array1{nullptr}, *array2{nullptr}, *prodArray{nullptr};
  std::vector<int> size{};

  std::cout << "Enter size of array1: ";
  sizeInput(size);
  // sizeInput(&size);
  array1 = createArray(size.at(0));
  std::cout << "-----Enter the elements of array1-----" << std::endl;
  input(array1, size.at(0));
  print(array1, size.at(0));
  std::cout << std::endl;

  std::cout << "Enter size of array2: ";
  sizeInput(size);
  array2 = createArray(size.at(1));
  std::cout << "-----Enter the elements of array2-----" << std::endl;
  input(array2, size.at(1));
  print(array2, size.at(1));
  std::cout << "-------------------\n" << std::endl;

  std::cout << "Product Array: ";
  size.push_back(size.at(0) * size.at(1));
  prodArray = createArray(size.at(2));
  product(array1, array2, prodArray, size);
  print(prodArray, size.at(2));
  std::cout << std::endl;

  delete[] array1, array2, prodArray;

  return 0;
}