// Note: this program will crash
#include <iostream>

class Shallow {
 private:
  int *data;

 public:
  void set_data_value(int d) { *data = d; }
  int get_data_value() { return *data; }
  // Constructor
  Shallow(int d);
  // Copy Constructor
  Shallow(const Shallow &source);
  // Destructor
  ~Shallow();
};

// Constructor
Shallow::Shallow(int d) {
  data = new int;
  *data = d;
}
// copy constructor
Shallow::Shallow(const Shallow &source) : data(source.data) {
  std::cout << "Copy constructor  - shallow copy" << std::endl;
}
// destructor
Shallow::~Shallow() {
  delete data;
  std::cout << "Destructor freeing data" << std::endl;
}
// display
void display_shallow(Shallow s) {
  std::cout << s.get_data_value() << std::endl;
}

int main() {
  Shallow obj1{100};
  display_shallow(obj1);

  Shallow obj2{obj1};
  obj2.set_data_value(1000);

  return 0;
}
