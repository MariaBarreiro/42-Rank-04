#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
  {
    const int size = 6;
    Animal *animals[size];

    std::cout << "CREATING ANIMALS" << std::endl;

    for (int i = 0; i < size / 2; i++) {
      std::cout << PINK "Creating Dog " << i << RES << std::endl;
      animals[i] = new Dog();
      std::cout << std::endl;
    }

    for (int i = size / 2; i < size; i++) {
      std::cout << LPINK "Creating Cat " << i << RES << std::endl;
      animals[i] = new Cat();
      std::cout << std::endl;
    }

    std::cout << "MAKING SOUNDS" << std::endl;

    for (int i = 0; i < size; i++) {
      std::cout << "Animal[" << i << "] is a " << animals[i]->getType()
                << " -> ";
      animals[i]->makeSound();
    }

    std::cout << std::endl;
    std::cout << "DELETING ANIMALS" << std::endl;

    for (int i = 0; i < size; i++) {
      std::cout << PURPLE "Deleting Animal[" << i << "] -> "
                << animals[i]->getType() << RES << std::endl;
      delete animals[i];
      std::cout << std::endl;
    }
  }
  {
    std::cout << "DOG DEEP COPY TEST" << std::endl;

    Dog dog1;
    dog1.getBrain()->setIdea(0, "I want steak");

    std::cout << DPINK "dog1 idea: " << dog1.getBrain()->getIdea(0) << RES
              << std::endl;

    Dog dog2(dog1);

    std::cout << DPINK "dog2 idea after copy: " << dog2.getBrain()->getIdea(0)
              << RES << std::endl;

    dog2.getBrain()->setIdea(0, "I want to sleep");

    std::cout << DPINK "dog1 idea: " << dog1.getBrain()->getIdea(0) << RES
              << std::endl;
    std::cout << DPINK "dog2 idea: " << dog2.getBrain()->getIdea(0) << RES
              << std::endl;
    std::cout << std::endl;

    std::cout << "DOG ASSIGNMENT TEST" << std::endl;
    Dog dog3;
    dog3.getBrain()->setIdea(0, "Original dog3 idea");

    std::cout << PURPLE "dog1 idea: " << dog1.getBrain()->getIdea(0)
              << std::endl;
    std::cout << "dog3 idea: " << dog3.getBrain()->getIdea(0) << RES
              << std::endl;

    dog3 = dog1;

    std::cout << PURPLE "dog1 idea: " << dog1.getBrain()->getIdea(0)
              << std::endl;
    std::cout << "dog3 idea: " << dog3.getBrain()->getIdea(0) << RES
              << std::endl;

    dog3.getBrain()->setIdea(0, "dog3 has a new idea");

    std::cout << PURPLE "dog1 idea: " << dog1.getBrain()->getIdea(0)
              << std::endl;
    std::cout << "dog3 idea: " << dog3.getBrain()->getIdea(0) << RES
              << std::endl;
  }
  {
    std::cout << std::endl;
    std::cout << "CAT DEEP COPY TEST" << std::endl;

    Cat cat1;
    cat1.getBrain()->setIdea(0, "Destroy the curtains");

    std::cout << PINK "cat1 idea: " << cat1.getBrain()->getIdea(0) << std::endl;

    Cat cat2(cat1);

    std::cout << PINK "cat2 idea after copy: " << cat2.getBrain()->getIdea(0)
              << RES << std::endl;

    cat2.getBrain()->setIdea(0, "Sleep on the keyboard");

    std::cout << PINK "cat1 idea: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2 idea: " << cat2.getBrain()->getIdea(0) << RES
              << std::endl;
  }
  return 0;
}
