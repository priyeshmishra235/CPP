#include "Dog.h"

#include <string>

void Dog::setName(std::string name) { dogName = name; }
std::string Dog::getName() { return dogName; }

void Dog::setBreed(std::string breed) { dogBreed = breed; }
std::string Dog::getBreed() { return dogBreed; }

void Dog::setPrice(int price) { dogPrice = price; }
double Dog::getPrice() { return dogPrice; }

void Dog::setAge(int age) { dogAge = age; }
int Dog::getAge() { return dogAge; }

Dog::Dog(std::string breed, std::string name, double price, int age)
    : dogBreed{breed}, dogName{name}, dogPrice{price}, dogAge{age} {};
