#include <iostream>
#include <vector>

#include "Dog.cpp"

std::vector<Dog> details() {
  std::vector<Dog> breeds;
  breeds.emplace_back("Labrador Retriever", "Buddy", 1200, 3);
  breeds.emplace_back("German Shepherd", "Max", 1500, 5);
  breeds.emplace_back("Golden Retriever", "Charlie", 1300, 4);
  breeds.emplace_back("Bulldog", "Bella", 1100, 2);
  breeds.emplace_back("Beagle", "Lucy", 1000, 3);
  breeds.emplace_back("Poodle", "Daisy", 1400, 4);
  breeds.emplace_back("Rottweiler", "Rocky", 1600, 6);
  breeds.emplace_back("Siberian Husky", "Luna", 1700, 2);
  breeds.emplace_back("Doberman", "Duke", 1550, 5);
  breeds.emplace_back("Cocker Spaniel", "Molly", 950, 3);
  return breeds;
}

int main() {
  std::vector<Dog> breeds = details();
  std::cout << "Different dogs Details: " << std::endl;
  for (auto &dog : breeds) {
    dog.display();
  }

  std::cout << "Enter the dog details :" << std::endl;
}
