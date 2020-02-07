#include "gtest/gtest.h"
#include "Animal.h"
#include "Cat.h"
#include "Duck.h"
#include "Dog.h"
#include <iostream>

TEST(TestCaseName, TestName) 
{
    Cat cat("Sabrina");
    Dog dog("Fido");
    Duck duck("Donald J Duck");

    cat.animalTalk();
    dog.animalTalk();
    duck.animalTalk();
}