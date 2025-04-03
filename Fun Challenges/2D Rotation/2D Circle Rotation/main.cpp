#include <unistd.h>

#include <cmath>
#include <iostream>
#include <vector>

const int height{40};
const int width{80};
const float pi{3.14159265358979323846};

struct point3d {
  float x, y, z;
};

void rotateX(point3d &p, float angle) {
  float rad{static_cast<float>(angle * pi / 180)};
  float y{static_cast<float>(p.y * cos(rad) - p.z * sin(rad))};
  float z{static_cast<float>(p.y * sin(rad) - p.z * cos(rad))};
  p.y = y;
  p.z = z;
}
void rotateY(point3d &p, float angle) {
  float rad{static_cast<float>(angle * pi / 180)};
  float x{static_cast<float>(p.x * cos(rad) + p.z * sin(rad))};
  float z{static_cast<float>(-p.x * sin(rad) + p.z * cos(rad))};
  p.x = x;
  p.z = z;
}
void rotateZ(point3d &p, float angle) {
  float rad{static_cast<float>(angle * pi / 180)};
  float x{static_cast<float>(p.x * cos(rad) - p.y * sin(rad))};
  float y{static_cast<float>(p.x * sin(rad) + p.y * cos(rad))};
  p.x = x;
  p.y = y;
}
void renderer(const std::vector<point3d> &points) {
  // step 1. create a buffer
  char buffer[height][width];
  for (int i{0}; i < height; i++) {
    for (int j{0}; j < width; j++) {
      buffer[i][j] = ' ';
    }
  }
  // step 2. convert 3d to 2d
  for (auto &p : points) {
    int x{static_cast<int>(p.x + width / 2)};
    int y{static_cast<int>(p.y + height / 2)};
    if (x >= 0 && x < width && y >= 0 && y < height)
      buffer[y][x] = '*';
  }
  // step 3. display the buffer
  for (int i{0}; i < height; i++) {
    for (int j{0}; j < width; j++) {
      std::cout << buffer[i][j];
    }
    std::cout << std::endl;
  }
}
int main() {
  std::vector<point3d> circle;
  int radius{20};
  double aspect_ratio = 2.5;
  int widthC = 2 * radius;
  int heightC = radius;
  for (int i = 0; i <= heightC; i++) {
    for (int j = 0; j <= widthC; j++) {
      double x = j - radius;
      double y = (i - heightC / 2.0) * aspect_ratio;
      if (x * x + y * y <= radius * radius + radius * 0.2) {
        circle.push_back({static_cast<float>(x), 0, static_cast<float>(y)});
      }
    }
  }
  float angleX{0}, angleY{0}, angleZ{0};
  while (true) {
    std::vector<point3d> rotatedCircle = circle;
    for (auto &c : rotatedCircle) {
      rotateX(c, angleX);
      rotateY(c, angleY);
      rotateZ(c, angleZ);
    }
    std::system("CLS");
    renderer(rotatedCircle);
    angleX++, angleY++, angleZ++;
    usleep(50000);
  }
}
