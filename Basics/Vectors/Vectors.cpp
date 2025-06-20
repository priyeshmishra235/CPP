#include <iostream>
#include <vector>

int main() {
  std::vector<char> vowel(5); // vowel vector of size 5
  std::vector<char> alphabets{'a', 'e', 'i', 'o'};
  alphabets.at(3) = 'e';
  alphabets.push_back('b');

  std::vector<int> numbers;                    // numbers vector created
  std::vector<int> nums(10);                   // nums vector of size 10
  std::vector<int> testScores{23, 26, 34, 45}; // size
  // automatically calculated

  std::vector<double> temps(299, 80); // 299 elements created with value
  // 80

  std::vector<std::vector<int>> ratings; // 2d vector is vetor of vector
  std::cout << ratings.at(2).at(4);
  std::cout << ratings[2][4];

  std::cout << alphabets.size() << std::endl;
  std::cout << "alphabets char at position 0 is " << alphabets.at(0)
            << std::endl; // vector
  // style
  std::cout << "alphabets char at position 3 is " << alphabets[3]
            << std::endl; // array
  // style
  std::cout << "alphabets char at position 4 is " << alphabets[4] << std::endl;

  return 0;
}
