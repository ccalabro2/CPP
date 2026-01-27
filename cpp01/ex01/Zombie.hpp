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
			void set_name(std::string name);
			Zombie();
			~Zombie();
};

Zombie* zombieHorde( int N, std::string name);

#endif
