#include <iostream>
#include <vector>

#include "Mystring.h"

int main() {
  Mystring a{"Hello"};
  Mystring b;
  b = a;
  b = "This is a test";

  Mystring empty;
  Mystring larry("Larry");
  Mystring stooge{larry};
  Mystring stooges;

  empty = stooge;

  empty.display();
  larry.display();
  stooge.display();
  empty.display();

  stooges = "Larry, Moe, and Curly";
  stooges.display();

  std::vector<Mystring> stooges_vec;
  stooges_vec.push_back("Larry");
  stooges_vec.push_back("Moe");
  stooges_vec.push_back("Curly");

  std::cout << "=== Loop 1 ==================" << std::endl;
  for (const Mystring &s : stooges_vec) s.display();
  std::cout << "=== Loop 2 ==================" << std::endl;
  for (Mystring &s : stooges_vec) s = "Changed";
  std::cout << "=== Loop 3 ================" << std::endl;
  for (const Mystring &s : stooges_vec) s.display();

  return 0;
}
