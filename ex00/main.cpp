#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
i->makeSound();
i->makeSound();
j->makeSound();
j->makeSound();
j->makeSound();
meta->makeSound();
meta->makeSound();
meta->makeSound();
const WrongAnimal* candy = new WrongAnimal();
const WrongAnimal* goyangyee = new WrongCat();
std::cout << goyangyee->getType() << " " << std::endl;
goyangyee->makeSound();
goyangyee->makeSound();
goyangyee->makeSound();
std::cout << "Thats weird, what about WrongAnimal?" << std::endl;
candy->makeSound();
candy->makeSound();
candy->makeSound();
delete meta;
delete j;
delete i;
delete candy;
delete goyangyee;
return 0;
}