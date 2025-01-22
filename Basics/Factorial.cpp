#include <iostream>

unsigned long long factorial(unsigned long long);

int main() {
  std::cout << factorial(20) << std::endl;  // 2432902008176640000
  return 0;
}

unsigned long long factorial(unsigned long long n) {
  if (n == 0) return 1;         // base case
  return n * factorial(n - 1);  // recursive case
}