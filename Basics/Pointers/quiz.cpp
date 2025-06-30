#include <iostream>

int main() {
  int num = 10;
  int val = 20;
  int *p = &num;
  int **pp = &p;

  std::cout << "\n--- Q1 ---\n";
  std::cout << "*p = ?\n"; // What will this print?
  std::cout << *p << "\n"; // 10

  std::cout << "\n--- Q2 ---\n";
  std::cout << "p = ?\n"; // What address will this print?
  std::cout << p << "\n"; // address of num

  std::cout << "\n--- Q3 ---\n";
  std::cout << "&p = ?\n"; // What address will this print?
  std::cout << &p << "\n"; // address of pointer p

  std::cout << "\n--- Q4 ---\n";
  std::cout << "*pp = ?\n"; // What will this print?
  std::cout << *pp << "\n"; // address of num

  std::cout << "\n--- Q5 ---\n";
  std::cout << "**pp = ?\n"; // What will this print?
  std::cout << **pp << "\n"; // 10

  std::cout << "\n--- Q6 ---\n";
  *p = 30;                  // Changes value of num
  std::cout << "num = ?\n"; // What is num now?
  std::cout << num << "\n"; // 30

  std::cout << "\n--- Q7 ---\n";
  *pp = &val;              // Now p = &val
  std::cout << "*p = ?\n"; // What value does p now point to?
  std::cout << *p << "\n"; // 20

  std::cout << "\n--- Q8 ---\n";
  **pp = 50;                // Changes val
  std::cout << "val = ?\n"; // What is val now?
  std::cout << val << "\n"; // 50

  std::cout << "\n--- Q9 ---\n";
  int a = 5;
  int *pa = &a;
  *pa = *pa + 1;
  std::cout << "a = ?\n"; // What is a now?
  std::cout << a << "\n"; // 6

  std::cout << "\n--- Q10 ---\n";
  // int* q = 100;           //invalid           // Valid or invalid? (Uncomment
  // to test) std::cout << *q << "\n";          // Dangerous! Why?

  std::cout << "\n--- Q11 ---\n";
  int arr[] = {1, 2, 3};
  int *arrp = arr;
  std::cout << "*arrp = ?\n"; // What is this?
  std::cout << *arrp << "\n"; // 1

  std::cout << "\n--- Q12 ---\n";
  std::cout << "*(arrp + 1) = ?\n"; // Pointer arithmetic
  std::cout << *(arrp + 1) << "\n"; // 2

  std::cout << "\n--- Q13 ---\n";
  std::cout << "&(*p) == p ?\n";                        // True or False?
  std::cout << (&(*p) == p ? "true" : "false") << "\n"; // True

  std::cout << "\n--- Q14 ---\n";
  std::cout << "*(&p) == p ?\n";                        // True or False?
  std::cout << (*(&p) == p ? "true" : "false") << "\n"; //  True

  std::cout << "\n--- Q15 ---\n";
  int b = 99;
  int *r = &b;
  *r += 1; // What does this do?
  std::cout << "b = ?\n";
  std::cout << b << "\n"; // 100

  return 0;
}
