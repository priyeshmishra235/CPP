#include <windows.h>

#include <chrono>
#include <cmath>
#include <iostream>
#include <thread>
const double pi{3.141592653589793};
const int centreX{31};
const int centreY{13};
const int radius{15};
void clearScreen() {
  COORD coord = {0, 0};
  DWORD count;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(h, &csbi);
  FillConsoleOutputCharacter(h, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord,
                             &count);
  SetConsoleCursorPosition(h, coord);
}
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
    clearScreen();
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
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }
  return 0;
}
