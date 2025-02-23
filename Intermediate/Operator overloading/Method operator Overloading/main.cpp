#include <iostream>

#include "Mystring.h"

int main() {
  std::cout << std::boolalpha << std::endl;

  Mystring larry{"Larry"};
  Mystring moe{"Moe"};

  Mystring stooge = larry;
  larry.display();
  moe.display();

  std::cout << (larry == moe) << std::endl;
  std::cout << (larry == stooge) << std::endl;

  larry.display();
  Mystring larry2 = -larry;
  larry2.display();

  Mystring stooges = larry + "Moe";  // ok with member function
  // Mystring stooges = "Larry" + moe;
  // Compiler error

  Mystring two_stooges = moe + " " + "Larry";
  two_stooges.display();
  Mystring three_stooges = moe + " " + larry + " " + "Curly";
  three_stooges.display();

  return 0;
}
