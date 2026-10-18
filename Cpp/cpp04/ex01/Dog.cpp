#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal() {
  _type = "Dog";
  _brain = new Brain;
  std::cout << BLUE "Dog default constructor called" RES << std::endl;
}

Dog::~Dog() {
  delete (_brain);
  std::cout << BLUE "Dog was destroyed" RES << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
  std::cout << BLUE "Dog copy constructor called" RES << std::endl;
  this->_type = other._type;
  _brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << BLUE "Dog copy assignment operator called" RES << std::endl;
  if (this != &other) {
    this->_type = other._type;
    delete (this->_brain);
    this->_brain = new Brain(*other._brain);
  }
  return (*this);
}

void Dog::makeSound() const { std::cout << PINK "Woof Woof!" RES << std::endl; }

Brain *Dog::getBrain() const { return (_brain); }
