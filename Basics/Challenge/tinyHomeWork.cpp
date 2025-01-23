#include <iostream>

int main() {
  std::cout << "How many rooms would you like to get cleaned?";
  int numberOfRooms{0};
  std::cin >> numberOfRooms;
  std::cout << "Estimates:\n";
  std::cout << "Number of rooms: " << numberOfRooms << "\nPrice per room: $30\n"
            << "Cost: $" << numberOfRooms * 30 << "\nTax: $3.06\n"
            << "Total estimate: $" << numberOfRooms * 30 + 3.06
            << "\n========================"
            << "\nEstimate valid for 30 days online";
  return 0;
}