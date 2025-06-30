#include <iostream>
class Point {
  int x, y;

public:
  Point(int x = 0, int y = 0) : x(x), y(y) {}
  Point operator+(const Point &other) const {
    return Point(x + other.x, y + other.y);
  }
  Point operator*(const Point &other) const {
    return Point(x * other.x, y * other.y);
  }
  Point &operator=(Point &&other) {
    if (this == &other) {
      return *this;
    }
    x = 0;
    y = 0;
    x = other.x;
    y = other.y;
    return *this;
  }
  void print() { std::cout << "(" << x << ", " << y << ")\n"; }
};

int main() {
  Point p1(2, 3), p2(4, 5), p3(6, 4);
  Point p4 = p1 + p2 + p3; // Uses overloaded +
  Point p5 = p1 * p2 * p3;
  p4.print(); // Output: (6, 8)
  p5.print();
  p5 = std::move(p4);
  p5.print();
}
