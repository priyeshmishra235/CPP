#include <unistd.h>

#include <chrono>
#include <cmath>
#include <iostream>
const double pi{3.141592653589793};
const int centreX{31};
const int centreY{13};
const int radius{15};
void drawBorder(int xAxis, int yAxis) {
  if (xAxis == 0 || xAxis == centreX * 2 - 1)
    std::cout << "|";
  else if (yAxis == 0 || yAxis == centreY * 2 - 1)
    std::cout << "-";
  else if (yAxis == centreY)
    std::cout << "-";
  else
    std::cout << " ";
}
void drawAxes(int xAxis, int yAxis) {
  if (xAxis == centreX && yAxis == centreY)
    std::cout << 0;
  else if (xAxis == centreX)
    std::cout << "|";
}
int main() {
  for (int angle{0};; angle += 5) {
    std::system("CLS");
    double radian{(angle * pi) / 180};
    for (int yAxis{0}; yAxis < centreY * 2; yAxis++) {
      for (int xAxis{0}; xAxis < centreX * 2; xAxis++) {
        drawBorder(xAxis, yAxis);
        drawAxes(xAxis, yAxis);
        for (int r{radius}; r > 0; r--) {
          int newX{static_cast<int>(centreX + r * cos(radian))};
          int newY{static_cast<int>(centreY + r * sin(radian))};
          if (yAxis == newY && xAxis == newX) std::cout << "\b*";
        }
      }
      std::cout << "\n";
    }
    usleep(50000);
  }
  return 0;
}
