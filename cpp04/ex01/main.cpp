#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "=== Test 1: Basic creation and deletion ===" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << "\n=== Test 2: Array of Animals (half Dog, half Cat) ===" << std::endl;
	Animal* animals[6];

	for (int idx = 0; idx < 3; idx++)
	{
		animals[idx] = new Dog();
	}

	for (int idx = 3; idx < 6; idx++)
	{
		animals[idx] = new Cat();
	}

	std::cout << "\n=== Using animals ===" << std::endl;
	for (int idx = 0; idx < 6; idx++)
	{
		std::cout << "Animal " << idx << " type: " << animals[idx]->getType() << std::endl;
		animals[idx]->makeSound();
	}

	std::cout << "\n=== Deleting animals ===" << std::endl;
	for (int idx = 0; idx < 6; idx++)
	{
		delete animals[idx];
	}

	std::cout << "\n=== Test 3: Deep copy test ===" << std::endl;
	Dog* dog1 = new Dog();
	dog1->getBrain()->setIdea(0, "I want to play");
	dog1->getBrain()->setIdea(1, "I'm hungry");

	Dog* dog2 = new Dog(*dog1);
	dog2->getBrain()->setIdea(0, "I want to sleep");

	std::cout << "Dog1 idea 0: " << dog1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog1 idea 1: " << dog1->getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog2 idea 0: " << dog2->getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog2 idea 1: " << dog2->getBrain()->getIdea(1) << std::endl;

	if (dog1->getBrain() != dog2->getBrain())
	{
		std::cout << "Deep copy successful: different Brain addresses" << std::endl;
	}

	delete dog1;
	delete dog2;

	std::cout << "\n=== Test 4: Assignment operator deep copy ===" << std::endl;
	Cat* cat1 = new Cat();
	cat1->getBrain()->setIdea(0, "I want fish");

	Cat* cat2 = new Cat();
	*cat2 = *cat1;
	cat2->getBrain()->setIdea(0, "I want milk");

	std::cout << "Cat1 idea 0: " << cat1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat2 idea 0: " << cat2->getBrain()->getIdea(0) << std::endl;

	if (cat1->getBrain() != cat2->getBrain())
	{
		std::cout << "Deep copy successful: different Brain addresses" << std::endl;
	}

	delete cat1;
	delete cat2;

	return 0;
}
