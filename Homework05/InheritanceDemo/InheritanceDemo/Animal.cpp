#include "Animal.h"
#include <iostream>

Animal::Animal()
{
}

Animal::Animal(
	const std::string& name,
	const std::string& type,
	const std::string& sound
):
	name(name),
	type(type),
	sound(sound)

{}

const std::string& Animal::getName() const
{
	return name;
}

const std::string& Animal::getType() const
{
	return type;
}

const std::string& Animal::getSound() const
{
	return sound;
}

void Animal::animalTalk()
{
	std::cout << "My name is " << getName() << " I am a " << getType() << " and I say" << getSound();
}
