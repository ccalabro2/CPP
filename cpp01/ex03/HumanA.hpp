#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string Name;
		Weapon &Weapon;

	public:
		void attack();
		HumanA(std::string n, Weapon &w) : Name(n), Weapon(w) {};
		~HumanA(){};
};
