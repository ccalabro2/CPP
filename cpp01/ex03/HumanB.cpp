#include <iostream>
#include "HumanB.hpp"

void HumanB::attack()
{
	if(weapon == NULL)
		std::cout<<Name<<" attacks with their hands"<<std::endl;
	else
		std::cout<<Name<<" attacks with their "<<weapon->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}
