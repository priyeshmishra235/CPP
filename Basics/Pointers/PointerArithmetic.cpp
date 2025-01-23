#include <iostream>

int main() {
  int scores[]{100, 95, 89, 68, -1};
  int *score_ptr{scores};

  while (*score_ptr != -1) {
    std::cout << *score_ptr << std::endl;
    score_ptr++;
  }

  std::cout << "\n-------------------------" << std::endl;
  score_ptr = scores;
  while (*score_ptr != -1) std::cout << *score_ptr++ << std::endl;

  std::cout << "\n-------------------------" << std::endl;
  std::string s1{"Frank"};
  std::string s2{"Frank"};
  std::string s3{"James"};

  std::string *p1{&s1};
  std::string *p2{&s2};
  std::string *p3{&s1};

  std::cout << std::boolalpha;
  std::cout << p1 << "==" << p2 << ": " << (p1 == p2) << std::endl;  // false
  std::cout << p1 << "==" << p3 << ": " << (p1 == p3) << std::endl;  // true

  std::cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << std::endl;  // true
  std::cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << std::endl;  // true

  p3 = &s3;  // point to James
  std::cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3)
            << std::endl;  // false

  std::cout << "\n-------------------------" << std::endl;
  char name[]{"Frank"};

  char *char_ptr1{nullptr};
  char *char_ptr2{nullptr};

  char_ptr1 = &name[0];  // F
  char_ptr2 = &name[3];  // n

  std::cout << "In the std::string " << name << ",  " << *char_ptr2 << " is "
            << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1
            << std::endl;

  std::cout << std::endl;
  return 0;
}
