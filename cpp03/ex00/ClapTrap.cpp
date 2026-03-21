#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap default constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const std::string& n) : name(n), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap named constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage){
    std::cout << "ClapTrap copy constructor called for " << name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap copy assignment operator called for " << name << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if(energyPoints > 0 && hitPoints > 0){
        energyPoints -= 1;
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " can't attack because it has no hit points or energy points!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    hitPoints -= amount;
    if (hitPoints < 0) {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if(energyPoints > 0 && hitPoints > 0){
        hitPoints += amount;
        energyPoints -= 1;
        std::cout << "ClapTrap " << name << " repairs itself, recovering " << amount << " hit points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " can't repair because it has no hit points or energy points!" << std::endl;
    }
}