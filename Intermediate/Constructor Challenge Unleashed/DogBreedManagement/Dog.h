#ifndef _DOG_H_
#define _DOG_H_
#include <string>

class Dog {
  // attributes
 private:
  std::string dogBreed{};
  std::string dogName{};
  double dogPrice{0};
  int dogAge{0};

  // methods
 public:
  void setName(std::string name);
  std::string getName();

  void setBreed(std::string breed);
  std::string getBreed();

  void setPrice(int price);
  double getPrice();

  void setAge(int age);
  int getAge();

  Dog(std::string breed = "None", std::string name = "None",
      double price = 50.00, int age = 2);

  void display() {
    std::cout << "Breed Name: " << dogBreed << "  Dog's Name: " << dogName
              << std::endl
              << "Dog's Age: " << dogAge << " Dog's Price: " << dogPrice
              << std::endl;
  }
};

#endif

// or use #pragma once