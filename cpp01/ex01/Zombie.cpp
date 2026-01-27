#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout<< name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::set_name(std::string n)
{
	name = n;
}

Zombie::Zombie (){}
Zombie::~Zombie (){
	std::cout<<name<<" is dead"<<std::endl;
}
