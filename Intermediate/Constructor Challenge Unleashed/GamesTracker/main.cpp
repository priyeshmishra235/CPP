#include <cstring>
#include <iostream>
#include <string>
#include <vector>

class System {
private:
  char *osName;
  int osAge;
  std::vector<std::string> apps;

public:
  System() {
    osName = new char[8];
    std::strcpy(osName, "windows");
    osAge = 10;
    apps = {""};
  };
  System(const char *name, int age, std::vector<std::string> app) {
    osName = new char[strlen(name) + 1];
    std::strcpy(osName, name);
    osAge = age;
    apps = app;
  };
  System(const System &other) {
    std::cout << "Copy constructor";
    osName = new char[strlen(other.osName) + 1];
    std::strcpy(osName, other.osName);
    osAge = other.osAge;
    apps = other.apps;
  };
  System(System &&other) noexcept {
    osName = other.osName;
    other.osName = nullptr;
    osAge = other.osAge;
    apps = other.apps;
  };
  void display() const {
    if (osName != nullptr) {
      std::cout << "\nOS Name: " << osName << "\nOS Age: " << osAge
                << std::endl;
      for (const auto &v : apps) {
        std::cout << v << std::endl;
      }
    } else {
      std::cout << "osName is null" << std::endl;
    }
  };
  ~System() { delete[] osName; }
};
int main() {
  System os1;
  std::cout << "os1" << std::endl;
  os1.display();

  std::cout << "os2" << std::endl;
  const char *name = "linux";
  System os2(name, 18, {"app1", "app2"});
  os2.display();

  std::cout << "os3" << std::endl;
  System os3(os2);
  os3.display();

  std::cout << "os4" << std::endl;
  System os4 = std::move(os3);
  os4.display();
  os3.display();
  return 0;
}
