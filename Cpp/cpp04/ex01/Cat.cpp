#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal() {
  _type = "Cat";
  _brain = new Brain;
  std::cout << BLUE "Cat default constructor called" RES << std::endl;
}

Cat::~Cat() {
  delete (_brain);
  std::cout << BLUE "Cat was destroyed" RES << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << BLUE "Cat copy constructor called" RES << std::endl;
  this->_type = other._type;
  _brain = new Brain(*other._brain);
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << BLUE "Cat copy assignment operator called" RES << std::endl;
  if (this != &other) {
    this->_type = other._type;
    delete (this->_brain);
    this->_brain = new Brain(*other._brain);
  }
  return (*this);
}

void Cat::makeSound() const { std::cout << DPINK "Meowwww!" RES << std::endl; }

Brain *Cat::getBrain() const { return (_brain); }
