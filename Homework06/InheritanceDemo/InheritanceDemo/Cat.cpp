#include "Cat.h"
#include "Animal.h"
#include <iostream>

Cat::Cat(std::string name) : Animal(name, "Cat", "meow")
{}

void Cat::animalTalk()
{
	Animal::animalTalk();
	std::cout << ". I like mice\n";
}
