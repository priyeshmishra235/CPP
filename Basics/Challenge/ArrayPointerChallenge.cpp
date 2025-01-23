#include <iostream>

int *createArray(size_t size, int initValue = 0) {
  int *storageArray{nullptr};
  storageArray = new int[size];
  for (size_t i{0}; i < size; i++) {
    *(storageArray + i) = initValue;
  }
  return storageArray;
}
void print(const int *array, size_t size) {
  std::cout << "[ ";
  for (size_t i{0}; i < size; i++) {
    std::cout << array[i] << " ";
  }
  std::cout << "]" << std::endl;
}
void inputArray(int *arr, size_t size) {
  for (size_t i{0}; i < size; i++) {
    std::cout << "Enter the " << i << "th element: ";
    std::cin >> arr[i];
  }
}
int biggestFind(const int *arr, size_t size) {
  int biggest{*arr};
  for (size_t i{0}; i < size; i++) {
    if (biggest < arr[i]) biggest = arr[i];
  }
  return biggest;
}
int smallestFind(const int *arr, size_t size) {
  int smallest{*arr};
  for (size_t i{0}; i < size; i++) {
    if (smallest > arr[i]) smallest = arr[i];
  }
  return smallest;
}
void revArrayMethod1(int *arr, size_t size) {
  for (size_t i{0}; i < size; i++) {
    int start{static_cast<int>(i)}, end{static_cast<int>(size - i - 1)};
    while (start <= end) {
      int temp{arr[start]};
      arr[start] = arr[end];
      arr[end] = temp;
      break;
    }
  }
}
void revArrayMethod2(int *arr, size_t size) {
  int *start{arr}, *end{arr + size - 1};
  while (start < end) {
    int temp{*start};
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}
int main() {
  int *arr{}, size{0};
  std::cout << "Enter the size: " << std::endl;
  std::cin >> size;
  arr = createArray(size);
  inputArray(arr, size);
  std::cout << "Original Array: ";
  print(arr, size);
  std::cout << "Biggest number is: " << biggestFind(arr, size) << std::endl;
  std::cout << "Smallest number is: " << smallestFind(arr, size) << std::endl;
  std::cout << "Reversed Array Method 1: ";
  revArrayMethod1(arr, size);
  print(arr, size);
  std::cout << "Reversed Array Method 2: ";
  revArrayMethod2(arr, size);
  print(arr, size);
  delete[] arr;
  return 0;
}