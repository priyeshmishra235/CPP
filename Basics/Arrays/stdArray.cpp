#include <array>
#include <iostream>

void printArray(const std::array<int, 5> &a) {
  for (const auto &s : a) {
    std::cout << s << std::endl;
  }
}
template <typename T, std::size_t N>
void printArrayAnySize(const std::array<T, N> &a) {
  for (const auto &x : a)
    std::cout << x << '\n';
}
int main() {
  int a{};
  std::array<int, 5> a1{3, 34, 34, 6, 2};        // list initialization
  std::array<int, 5> a2 = {23, 56, 78, 12, 465}; // assign initialization
  std::array<int, 7> a3;                         // junk number default
  std::array<int, 7> a4{};                       // all default to zero
  std::array<int, 7> a5{78};                     // only [1] = 78, rest = 0

  printArray(a1); // size need to be fixed
  printArrayAnySize(a1);
  std::cout << std::endl;
  printArrayAnySize(a2);
  std::cout << std::endl;
  printArrayAnySize(a3);
  std::cout << std::endl;
  printArrayAnySize(a4);
  std::cout << std::endl;
  printArrayAnySize(a5);
  std::cout << std::endl;
  return 0;
}
