/* Write a C++ function named apply_all that expects two arrays of integers and
  their sizes and dynamically allocates a new array of integers whose size is
  the product of the 2 array sizes

  The function should loop through the second array and multiplies each element
  across each element of array 1 and store the product in the newly created
  array.

  The function should return a pointer to the newly allocated array.

  You can also write a print function that expects a pointer to an array of
  integers and its size and display the elements in the array.

  For example,

  Below is the output from the following code which would be in main:

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: " ;
    print(array1,5);

    cout << "Array 2: " ;
    print(array2,3);

    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(results,15);

   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/

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
void print(const int *array, size_t size) {
  std::cout << "[ ";
  for (size_t i{0}; i < size; i++) {
    std::cout << array[i] << " ";
  }
  std::cout << "]" << std::endl;
}
void input(int *array, size_t size) {
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
void product(int *array1, int *array2, int *prodArray, std::vector<int> &size) {
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
  std::cout << "Enter the elements of array1" << std::endl;
  input(array1, size.at(0));
  print(array1, size.at(0));

  std::cout << "Enter size of array2: ";
  sizeInput(size);
  array2 = createArray(size.at(1));
  std::cout << "Enter the elements of array2" << std::endl;
  input(array1, size.at(1));
  print(array1, size.at(1));

  std::cout << "Product Array: ";
  size.push_back(size.at(0) * size.at(1));
  prodArray = createArray(size.at(2));
  print(prodArray, size.at(2));
  product(array1, array2, prodArray, size);
  print(prodArray, size.at(2));

  delete[] array1, array2, prodArray;

  return 0;
}