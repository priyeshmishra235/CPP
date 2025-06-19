#include <unistd.h>

#include <cmath>
#include <iostream>
#include <vector>

const int HEIGHT{40};
const int WIDTH{80};
const float PI{3.14159265358979323846};

struct point3d {
  float x, y, z;
};
void rotateX(point3d &p, float angle) {
  float rad{static_cast<float>(angle * PI / 180.0)};
  float y{static_cast<float>(p.y * cos(rad) - p.z * sin(rad))};
  float z{static_cast<float>(p.y * sin(rad) + p.z * cos(rad))};
  p.y = y;
  p.z = z;
}
void rotateY(point3d &p, float angle) {
  float rad{static_cast<float>(angle * PI / 180.0)};
  float x{static_cast<float>(p.x * cos(rad) + p.z * sin(rad))};
  float z{static_cast<float>(-p.x * sin(rad) + p.z * cos(rad))};
  p.x = x;
  p.z = z;
}
void rotateZ(point3d &p, float angle) {
  float rad{static_cast<float>(angle * PI / 180.0)};
  float x{static_cast<float>(p.x * cos(rad) - p.y * sin(rad))};
  float y{static_cast<float>(p.x * sin(rad) + p.y * cos(rad))};
  p.x = x;
  p.y = y;
}
void renderPlane(const std::vector<point3d> &points) {
  char buffer[HEIGHT][WIDTH];
  for (int i{0}; i < HEIGHT; i++) {
    for (int j{0}; j < WIDTH; j++) {
      buffer[i][j] = ' ';
    }
  }
  // converting 3d to 3d
  for (const auto &p : points) {
    int x{static_cast<int>(p.x + WIDTH / 2)};
    int y{static_cast<int>(p.y + HEIGHT / 2)};
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) buffer[y][x] = '#';
  }
  // printing buffer to the terminal
  for (int i{0}; i < HEIGHT; i++) {
    for (int j{0}; j < WIDTH; j++) {
      std::cout << buffer[i][j];
    }
    std::cout << std::endl;
  }
}
int main() {
  // create plane coordinates
  std::vector<point3d> plane;
  int planeSize{20};
  for (int i{-planeSize}; i < planeSize; i++) {
    for (int j{-planeSize}; j < planeSize; j++) {
      plane.push_back({static_cast<float>(i), 0, static_cast<float>(j)});
    }
  }
  float angleX{0}, angleY{0}, angleZ{0};
  while (true) {
    std::vector<point3d> rotatedPlane = plane;
    for (auto &p : rotatedPlane) {
      rotateX(p, angleX);
      rotateY(p, angleY);
      rotateZ(p, angleZ);
    }
    std::system("CLS");
    renderPlane(rotatedPlane);
    angleX += 1, angleY += 1, angleZ += 1;
    usleep(5000);
  }
  return 0;
}