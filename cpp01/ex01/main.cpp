#include "Zombie.hpp"

int main()
{
	int n = 5;
	Zombie* duce = zombieHorde(n, "carlo");
	for (int i = 0; i < n; i++)
	{
		duce[i].announce();
	}
	delete[] duce;
}
