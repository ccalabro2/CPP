#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "=== Test: Abstract Animal class ===" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;

	std::cout << "\n=== Test: Array of Animals ===" << std::endl;
	Animal* animals[4];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	for (int idx = 0; idx < 4; idx++)
	{
		std::cout << "Animal " << idx << " type: " << animals[idx]->getType() << std::endl;
		animals[idx]->makeSound();
	}

	for (int idx = 0; idx < 4; idx++)
	{
		delete animals[idx];
	}

	return 0;
}
