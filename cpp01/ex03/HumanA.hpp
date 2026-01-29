#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string Name;
		Weapon &weapon;

	public:
		void attack();
		HumanA(std::string n, Weapon &w) : Name(n), weapon(w) {};
		~HumanA(){};
};
