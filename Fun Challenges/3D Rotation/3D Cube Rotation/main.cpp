#include <math.h>   // For trigonometric functions like sin, cos
#include <stdio.h>  // For printf and putchar
#include <string.h> // For memset (used to reset buffers)
#include <unistd.h> // For usleep (used to create delay between frames)
// Rotation angles (rotationX, rotationY, rotationZ) for the cube in 3D space
float rotationX, rotationY, rotationZ;

// Screen dimensions (160x44) define the resolution of the ASCII output
int screenWidth = 160, screenHeight = 44;

// Buffers to store depth (depthBuffer) and ASCII representation (frameBuffer)
float depthBuffer[160 *
                  44]; // Stores the inverse of depth (1/z) for depth sorting
char frameBuffer[160 * 44]; // Stores the ASCII characters to be displayed

// ASCII character used for the background
int backgroundChar = '.';

// Distance from the camera to the object (affects perspective scaling)
int cameraDistance = 100;

// Horizontal offset to align the cube properly on screen
float horizontalOffset;

// Perspective scaling factor (larger values make the object appear closer)
float perspectiveScale = 40;

// Increment speed determines the step size when iterating over the cube's
// surface
float stepSize = 0.6;

// Index for buffer array
int bufferIndex;

// Function to calculate the rotated X coordinate in 3D space
float computeRotatedX(int i, int j, int k) {
  return j * sin(rotationX) * sin(rotationY) * cos(rotationZ) -
         k * cos(rotationX) * sin(rotationY) * cos(rotationZ) +
         j * cos(rotationX) * sin(rotationZ) +
         k * sin(rotationX) * sin(rotationZ) +
         i * cos(rotationY) * cos(rotationZ);
}

// Function to calculate the rotated Y coordinate in 3D space
float computeRotatedY(int i, int j, int k) {
  return j * cos(rotationX) * cos(rotationZ) +
         k * sin(rotationX) * cos(rotationZ) -
         j * sin(rotationX) * sin(rotationY) * sin(rotationZ) +
         k * cos(rotationX) * sin(rotationY) * sin(rotationZ) -
         i * cos(rotationY) * sin(rotationZ);
}

// Function to calculate the rotated Z coordinate in 3D space
float computeRotatedZ(int i, int j, int k) {
  return k * cos(rotationX) * cos(rotationY) -
         j * sin(rotationX) * cos(rotationY) + i * sin(rotationY);
}

// Function to project 3D points onto the 2D ASCII screen
void projectSurface(float cubeX, float cubeY, float cubeZ, int ch) {
  // Rotate the cube in 3D space
  float x = computeRotatedX(cubeX, cubeY, cubeZ);
  float y = computeRotatedY(cubeX, cubeY, cubeZ);
  float z = computeRotatedZ(cubeX, cubeY, cubeZ) + cameraDistance;

  // Prevent division by zero by ensuring z is not zero
  float inverseZ = 1 / z;

  // Convert 3D coordinates to 2D screen space
  float xp = (int)(screenWidth / 2 + horizontalOffset +
                   perspectiveScale * inverseZ * x * 2);
  float yp = (int)(screenHeight / 2 + perspectiveScale * inverseZ * y);

  // Calculate 1D buffer index for the pixel position
  bufferIndex = xp + yp * screenWidth;

  // Ensure the index is within valid screen bounds
  if (bufferIndex >= 0 && bufferIndex < screenWidth * screenHeight) {
    if (inverseZ >
        depthBuffer[bufferIndex]) { // Depth checking for proper rendering
      depthBuffer[bufferIndex] = inverseZ;
      frameBuffer[bufferIndex] = ch; // Assign ASCII character to buffer
    }
  }
}

int main() {
  // Clear the screen using ANSI escape code
  printf("\x1b[2J");

  while (1) {
    // Reset buffers for each frame
    memset(frameBuffer, backgroundChar, screenWidth * screenHeight);
    memset(depthBuffer, 0, screenWidth * screenHeight * sizeof(float));

    float cubeSize = 20;              // Defines the size of the cube
    horizontalOffset = -2 * cubeSize; // Adjust horizontal positioning

    // Iterate over the cube's surfaces
    for (float cubeX = -cubeSize; cubeX < cubeSize; cubeX += stepSize) {
      for (float cubeY = -cubeSize; cubeY < cubeSize; cubeY += stepSize) {
        // Call function for each surface of the cube
        projectSurface(cubeX, cubeY, -cubeSize, '@');  // Front face
        projectSurface(cubeSize, cubeY, cubeX, '$');   // Right face
        projectSurface(-cubeSize, cubeY, -cubeX, '~'); // Left face
        projectSurface(-cubeX, cubeY, cubeSize, '#');  // Back face
        projectSurface(cubeX, -cubeSize, -cubeY, ';'); // Bottom face
        projectSurface(cubeX, cubeSize, cubeY, '+');   // Top face
      }
    }

    // Move cursor to top-left to redraw the frame
    printf("\x1b[H");

    // Print buffer to screen, ensuring newline at row start
    for (int k = 0; k < screenWidth * screenHeight; k++) {
      putchar(k % screenWidth ? frameBuffer[k] : 10);
    }

    // Rotate the cube incrementally
    rotationX += 0.05;
    rotationY += 0.05;
    rotationZ += 0.01;

    // Introduce delay to control animation speed
    usleep(16000);
  }
  return 0;
}
