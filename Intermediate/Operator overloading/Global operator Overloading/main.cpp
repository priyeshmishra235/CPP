#include <iostream>
#include <vector>

#include "Mystring.h"

int main() {
  Mystring larry{"Larry"};
  larry.display();

  larry = -larry;
  larry.display();

  std::cout << std::boolalpha << std::endl;
  Mystring moe{"Moe"};
  Mystring stooge = larry;

  std::cout << (larry == moe) << std::endl;
  std::cout << (larry == stooge) << std::endl;

  Mystring stooges = "Larry" + moe;
  stooges.display();

  Mystring two_stooges = moe + " " + "Larry";
  two_stooges.display();
  Mystring three_stooges = moe + " " + larry + " " + "Curly";
  three_stooges.display();

  return 0;
}
