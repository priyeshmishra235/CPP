#include <iostream>
#include <vector>

int main() {
  std::vector<int> vector1(0), vector2(0);
  vector1.push_back(10);
  vector1.push_back(20);

  std::cout << "VECTOR 1\n"
            << vector1.at(0) << "\n"
            << vector1.at(1) << "\nSize of vector1 is: " << vector1.size()
            << std::endl;

  vector2.push_back(100);
  vector2.push_back(200);

  std::cout << "\nVECTOR 2\n"
            << vector2.at(0) << "\n"
            << vector2.at(1) << "\nSize of vector2 is: " << vector2.size()
            << std::endl;

  std::vector<std::vector<int>> vector_2d;
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  std::cout << "\n2D-Vector\n"
            << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << "\n"
            << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1)
            << "\nSize of vector_2d is: " << vector_2d.size() << std::endl;

  vector1.at(0) = 1000;

  std::cout << "\nmodified vector1 element 0\n";

  std::cout << "\n2D-vector\n"
            << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << "\n"
            << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1)
            << "\nSize of vector2d is: " << vector_2d.size() << std::endl;

  std::cout << "\nVECTOR 1\n"
            << vector1.at(0) << "\n"
            << vector1.at(1) << "\nSize of vector1 is: " << vector1.size()
            << std::endl;
  return 0;
}