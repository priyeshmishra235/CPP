#include <iostream>

int main() {
  int counter{11};
  int result{0};

  result = ++counter; // first counter = counter + 1 then result = counter
  std::cout << "resutl: " << result;
  return 0;
}
