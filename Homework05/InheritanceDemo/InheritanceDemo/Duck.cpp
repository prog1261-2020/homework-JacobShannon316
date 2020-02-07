#include "Duck.h"
#include <iostream>
Duck::Duck(std::string name) : Animal(name, "Duck", "Quack")
{
}

void Duck::animalTalk()
{
	Animal::animalTalk();
	std::cout << ". I like Duck food\n";
}
