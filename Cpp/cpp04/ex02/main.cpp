#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int main() {
  {
    std::cout << "   ABSTRACT CLASS TEST" << std::endl;

   // Animal animal;
   //  Animal* animal = new Animal();

    Animal *dog = new Dog();
    std::cout << "Type: " << dog->getType() << std::endl;
    std::cout << "Sound: ";
    dog->makeSound();

    Animal *cat = new Cat();
    std::cout << "Type: " << cat->getType() << std::endl;
    std::cout << "Sound: ";
    cat->makeSound();

    delete dog;
    delete cat;
  }
  {
    std::cout << "    POLYMORPHISM TEST" << std::endl;

    Animal *animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();
    for (int i = 0; i < 4; i++) {
      std::cout << "Animal[" << i << "] is a " << animals[i]->getType()
                << " and says: ";
      animals[i]->makeSound();
    }
    for (int i = 0; i < 4; i++) {
      std::cout << "\nDeleting Animal[" << i << "] -> " << animals[i]->getType()
                << std::endl;
      delete animals[i];
    }
  }
  return 0;
}
