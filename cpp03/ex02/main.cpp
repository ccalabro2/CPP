#include "FragTrap.hpp"

int main(void)
{
	FragTrap p("Paolo");
	std::cout << std::endl;

	p.attack("target");
	p.takeDamage(30);
	p.beRepaired(20);
	std::cout << std::endl;

	p.highFive();
	std::cout << std::endl;
	return (0);
}
