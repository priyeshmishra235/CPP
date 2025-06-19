#include <iostream>

unsigned long long fibonacci(unsigned long long n);

int main() {
  std::cout << fibonacci(40) << std::endl; // 102334155
  return 0;
}

unsigned long long fibonacci(unsigned long long n) {
  if (n <= 1)
    return n;                                 // base cases
  return fibonacci(n - 1) + fibonacci(n - 2); // recursion
}
