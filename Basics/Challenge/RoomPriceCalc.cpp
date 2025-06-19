#include <iostream>

int main() {
  std::cout << "Welcome to carpet cleaning service!\nHere you can check charge "
               "estimates."
            << std::endl;

  int numberOf1SmallRoom{0}, numberOfBigRoom{0}, days{30}, discount{15};
  double pricePerSmallRoom{110}, pricePerBigRoom{165}, cost{0}, totalCost{0},
      salesTax{0};

  std::cout << "\nNumber of small rooms? " << std::endl;
  std::cin >> numberOf1SmallRoom;
  std::cout << "\nNumber of big rooms? " << std::endl;
  std::cin >> numberOfBigRoom;

  salesTax = {pricePerSmallRoom * 0.1 + pricePerBigRoom * 0.1 + 1.6};
  cost = {(numberOf1SmallRoom * pricePerSmallRoom) +
          (numberOfBigRoom * pricePerBigRoom) + salesTax};
  totalCost = {cost - (cost * 0.15) + salesTax};

  std::cout << "\nPrice per small room: $" << pricePerSmallRoom
            << "\nPrice per large room: $" << pricePerBigRoom << "\ncost: $"
            << cost << " (without discount)" << "\nTax: $" << salesTax
            << "\nDiscount: " << discount << "%"
            << "\n=================" << "\nTotal estimate: $" << totalCost
            << " (With discount)"
            << "\nThis estimate is valid for " << days << " days" << std::endl;
  return 0;
}