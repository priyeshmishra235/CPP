#include <iostream>
#include <string>
#include <vector>
void display(std::vector<std::vector<std::string>> &vec) {
  for (const auto &row : vec) {
    for (std::string val : row) {
      std::cout << val << " ";
    }
    std::cout << std::endl;
  }
}
int main() {
  int n{5};
  std::vector<std::vector<std::string>> vec(
      n, std::vector<std::string>(2 * n - 1, ""));
  for (int i{0}; i < n; i++) {
    for (int j{0}; j < 2 * n - 1; j++) {
      vec.at(i).at(j) = std::to_string(j + 1);
    }
  }
  int startCol{1}, endCol{2 * n - 2};
  for (int i{n - 1}; i > 0; i--) {
    if (startCol != endCol) {
      for (int j{startCol}; j < endCol; j++) {
        vec.at(i).at(j) = " ";
      }
      ++startCol, --endCol;
    }
  }
  display(vec);
  return 0;
}