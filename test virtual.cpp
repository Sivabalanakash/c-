#include <iostream>
class Animal {
public:
    virtual void makeSound() 
	{
        std::cout << "The animal makes a sound.\n";
    }
};
class Cat : public Animal
 {
public:
    void makeSound() override 
	{
        std::cout << "The cat meows.\n";
    }
};
class Dog : public Animal
 {
public:
    void makeSound() override {
        std::cout << "The dog barks.\n";
    }
};
int main() 
{
    Animal* animals[2];
    Cat cat;
    Dog dog;
    animals[0] = &cat;
    animals[1] = &dog;
    for (int i=0; i<2; i++) {
        animals[i]->makeSound();
    }
    return 0;
}