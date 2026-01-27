#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string t)
{
	type = t;
}

Weapon::Weapon(std::string t) : type(t) {}
Weapon::~Weapon()
{
	std::cout<<"ha droppato "<<type<<std::endl;
}
