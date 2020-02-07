#include "Dog.h"
#include "Animal.h"
#include <iostream>

Dog::Dog(std::string name) : Animal(name, "Dog", "Bark")
{
}

void Dog::animalTalk()
{
	Animal::animalTalk();
	std::cout << ". I like steak\n";
}
