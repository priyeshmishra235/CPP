#include <iostream>
#include <vector>
void fill(int n, int startRow, int startCol, int size,
          std::vector<std::vector<int>> &vec) {
  if (n == 0) {
    return;
  }
  for (int i{startCol}; i < size; i++) {
    for (int j{startRow}; j < size; j++) {
      vec.at(i).at(j) = n;
    }
  }
  fill(n - 1, startRow + 1, startCol + 1, size - 1, vec);
}
void display(std::vector<std::vector<int>> &vec) {
  for (const auto &row : vec) {
    for (int val : row) {
      std::cout << val << " ";
    }
    std::cout << std::endl;
  }
}
int main() {
  int n{5};
  std::vector<std::vector<int>> vec(2 * n - 1, std::vector<int>(2 * n - 1, 0));
  fill(n, 0, 0, 2 * n - 1, vec);
  display(vec);
  return 0;
}