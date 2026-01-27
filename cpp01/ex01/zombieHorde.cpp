#include "Zombie.hpp"


Zombie* zombieHorde(int n, std::string name)
{
	Zombie* zh = new Zombie[n];
	for(int i = 0; i < n; i++)
	{
		zh[i].set_name(name);
	}
	return(zh);
}
