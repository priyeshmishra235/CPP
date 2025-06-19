#include <iostream>
#include <string>
#include <vector>

void display(const std::vector<std::string> *const v) {
  // (*v).at(0) = "Funny";
  for (auto str : *v) std::cout << str << " ";
  std::cout << std::endl;

  // v = nullptr;
}

void display(int *array, int sentinel) {
  while (*array != sentinel) std::cout << *array++ << " ";
  std::cout << std::endl;
}

int main() {
  std::cout << "-----------------------------" << std::endl;
  std::vector<std::string> stooges{"Larry", "Moe", "Curly"};
  display(&stooges);

  std::cout << "\n-----------------------------" << std::endl;
  int scores[]{100, 98, 97, 79, 85, -1};
  display(scores, -1);

  std::cout << std::endl;
  return 0;
}
