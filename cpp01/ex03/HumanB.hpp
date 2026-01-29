#include <iostream>
#include "HumanA.hpp"

class HumanB
{
	private:
		std::string Name;
		Weapon* weapon;

	public:
		void attack();
		void setWeapon(Weapon &weapon);
		HumanB(std::string n) : Name(n), weapon(NULL) {};
		~HumanB(){};
};
