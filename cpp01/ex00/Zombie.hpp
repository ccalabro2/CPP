#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>

#ifndef ZOMBIE
#define ZOMBIE

class Zombie
{
	private:
			std::string name;

	public:
			void announce(void);
			Zombie(std::string name);
			~Zombie();
};

Zombie* newZombie( std::string name);
void randomChump( std::string name);

#endif
