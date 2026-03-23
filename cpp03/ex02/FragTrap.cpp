#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default") {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap default constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const std::string& n) : ClapTrap(n) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap named constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap copy constructor called for " << name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap copy assignment operator called for " << name << std::endl;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

void FragTrap::highFive(void)
{
	std::cout << "FragTrap " << name << " requests a high five!!" << std::endl;
}
