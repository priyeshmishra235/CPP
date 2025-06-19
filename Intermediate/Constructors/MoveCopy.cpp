#include <iostream>
#include <vector>

class Move {
 private:
  int *data;

 public:
  void set_data_value(int d) { *data = d; }
  int get_data_value() { return *data; }
  // Constructor
  Move(int d);
  // Copy Constructor
  Move(const Move &source);
  // Move Constructor
  Move(Move &&source) noexcept;
  // Destructor
  ~Move();
};

Move::Move(int d) {
  data = new int;
  *data = d;
  std::cout << "Constructor for: " << d << std::endl;
}

// Copy ctor
Move::Move(const Move &source) : Move{*source.data} {
  std::cout << "Copy constructor  - deep copy for: " << *data << std::endl;
}

// Move ctor
Move::Move(Move &&source) noexcept : data{source.data} {
  source.data = nullptr;
  std::cout << "Move constructor - moving resource: " << *data << std::endl;
}

Move::~Move() {
  if (data != nullptr) {
    std::cout << "Destructor freeing data for: " << *data << std::endl;
  } else {
    std::cout << "Destructor freeing data for nullptr" << std::endl;
  }
  delete data;
}

int main() {
  std::vector<Move> vec;

  vec.push_back(Move{10});
  vec.push_back(Move{20});
  vec.push_back(Move{30});
  vec.push_back(Move{40});
  vec.push_back(Move{50});
  vec.push_back(Move{60});
  vec.push_back(Move{70});
  vec.push_back(Move{80});

  return 0;
}
