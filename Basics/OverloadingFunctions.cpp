#include <iostream>
#include <string>
#include <vector>

void display(int);
void display(int, int);
void display(double);
// void display(float);
void display(double, double);
void display(double, float);
void display(float, float);
void display(std::string);
void display(std::string, std::string);
void display(std::vector<std::string>);
// void display(std::vector<std::vector<std::string>>);
void display(std::vector<int>);
// void display(std::vector<std::vector<int>>);

void display(int num) { std::cout << "integer: " << num << std::endl; }
void display(int num1, int num2) {
  std::cout << "integer1: " << num1 << " integer2: " << num2 << std::endl;
}
void display(double num) { std::cout << "double: " << num << std::endl; }
void display(double num1, double num2) {
  std::cout << "double1: " << num1 << " double2: " << num2 << std::endl;
}
void display(double num1, float num2) {
  std::cout << "double: " << num1 << " float: " << num2 << std::endl;
}
void display(float num1, float num2) {
  std::cout << "float1: " << num1 << " float2: " << num2 << std::endl;
}
void display(std::string s) { std::cout << "string: " << s << std::endl; }
void display(std::string s1, std::string s2) {
  std::cout << "string1: " << s1 << " string2: " << s2 << std::endl;
}
void display(std::vector<std::string> s) {
  std::cout << "Vector string: ";
  for (auto c : s) std::cout << c << " ";
  std::cout << std::endl;
}
void display(std::vector<int> v) {
  std::cout << "vector integer: ";
  for (auto i : v) std::cout << i;
  std::cout << std::endl;
}

int main() {
  display(100);
  display(500, -34);
  display(-234.452);
  display(43.34F);  // since no float fxn, will be converted to double
  display(77.264, 46.21);
  display(-946.258, -63.56F);
  display(56.15F, 76.103);     // ambiguous b/c should convert first float to
                               // double or double one to float
  display(46.154F, 657.355F);  // same for this too

  display("c-style string");  // will be converted to c++ style string
  std::string s{"c++ style string"};
  display(s);

  display("c-style string", s);
  std::vector<std::string> color{"Red", "Green", "Blue", "Black", "White"};
  display(color);

  std::vector<int> rgbValues{196, 255, 165};
  display(rgbValues);
  return 0;
}