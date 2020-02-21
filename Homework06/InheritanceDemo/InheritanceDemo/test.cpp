#include "gtest/gtest.h"
#include "Animal.h"
#include "Cat.h"
#include <iostream>

TEST(TestCaseName, TestName) 
{
    Cat cat("Sabrina");
    Animal dog("Fido", "dog", "Gav");
    Animal duck("Donald J Duck", "duck", "Quack");

    cat.animalTalk();
    dog.animalTalk();
    duck.animalTalk();


}