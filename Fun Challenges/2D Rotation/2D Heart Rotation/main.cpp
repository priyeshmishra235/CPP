#include <unistd.h>

#include <cmath>  // it has M_PI for pi value
#include <cstdlib>
#include <iostream>
#include <vector>

struct point3d {
  float x, y, z;
};
void rotateX(point3d &p, float angle) {
  float rad{static_cast<float>(angle * M_PI / 180.0f)};
  float y{p.y * std::cos(rad) - p.z * std::sin(rad)};
  float z{p.y * std::sin(rad) + p.z * std::cos(rad)};
  p.y = y;
  p.z = z;
}
void rotateY(point3d &p, float angle) {
  float rad{static_cast<float>(angle * M_PI / 180.0f)};
  float x{p.x * std::cos(rad) + p.z * std::sin(rad)};
  float z{-p.x * std::sin(rad) + p.z * std::cos(rad)};
  p.x = x;
  p.z = z;
}
void rotateZ(point3d &p, float angle) {
  float rad{static_cast<float>(angle * M_PI / 180.0f)};
  float x{p.x * std::cos(rad) - p.y * std::sin(rad)};
  float y{p.x * std::sin(rad) + p.y * std::cos(rad)};
  p.x = x;
  p.y = y;
}
void renderer(const std::vector<point3d> &points) {
  const int width{80}, height{40};
  char buffer[height][width];
  for (int i{0}; i < height; ++i)
    for (int j{0}; j < width; ++j) buffer[i][j] = ' ';
  for (const auto &p : points) {
    int x{static_cast<int>(p.x + width / 2)};
    int y{static_cast<int>(p.y + height / 2)};
    if (x >= 0 && x < width && y >= 0 && y < height) buffer[y][x] = '*';
  }
  for (int i{0}; i < height; ++i) {
    for (int j{0}; j < width; ++j) std::cout << buffer[i][j];
    std::cout << std::endl;
  }
}
int main() {
  std::vector<point3d> heart;
  for (float t{0}; t <= 2 * M_PI; t += 0.05f) {
    for (float s{-M_PI}; s <= M_PI; s += 0.05f) {
      float x{static_cast<float>(16 * std::pow(std::sin(t), 3))};
      float y{static_cast<float>(13 * std::cos(t) - 5 * std::cos(2 * t) -
                                 2 * std::cos(3 * t) - std::cos(4 * t))};
      float z{0};
      heart.push_back({x, -y, z});
    }
  }
  float angleX{0}, angleY{0}, angleZ{0};
  while (true) {
    std::vector<point3d> rotatedHeart{heart};
    for (auto &p : rotatedHeart) {
      rotateX(p, angleX);
      rotateY(p, angleY);
      rotateZ(p, angleZ);
    }
    std::system("CLS");
    renderer(rotatedHeart);
    angleX += 1.0f;
    angleY += 1.0f;
    angleZ += 1.0f;
    usleep(50000);
  }
  return 0;
}