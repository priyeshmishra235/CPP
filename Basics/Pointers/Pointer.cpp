#include <iostream>
#include <string>
#include <vector>

int main() {
  int num{10};
  std::cout << "Value of num is: " << num << std::endl;
  std::cout << "sizeof of num is: " << sizeof num << std::endl;
  std::cout << "Address of num is: " << &num << std::endl;

  int *p;
  std::cout << "\nValue of p is: " << p << std::endl;  // garbage
  std::cout << "Address of p is: " << &p << std::endl;
  std::cout << "sizeof of p is: " << sizeof p << std::endl;

  p = nullptr;
  std::cout << "\nValue of p is: " << p << std::endl;

  int *p1{nullptr};
  double *p2{nullptr};
  unsigned long long *p3{nullptr};
  std::vector<std::string> *p4{nullptr};
  std::string *p5{nullptr};

  std::cout << "\nsizeof p1 is: " << sizeof p1 << std::endl;
  std::cout << "sizeof p2 is: " << sizeof p2 << std::endl;
  std::cout << "sizeof p3 is: " << sizeof p3 << std::endl;
  std::cout << "sizeof p4 is: " << sizeof p4 << std::endl;
  std::cout << "sizeof p5 is: " << sizeof p5 << std::endl;

  int score{10};
  double high_temp{100.7};

  int *score_ptr{nullptr};

  score_ptr = &score;
  std::cout << "Value of score is: " << score << std::endl;
  std::cout << "Address of score is: " << &score << std::endl;
  std::cout << "Value of score_ptr is: " << score_ptr << std::endl;

  // score_ptr = &high_temp;     // Compiler error

  std::cout << std::endl;
  return 0;
}
