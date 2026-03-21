#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Alpha");
    ClapTrap b("Beta");

    std::cout << std::endl;

    a.attack("Beta");
    b.takeDamage(5);

    std::cout << std::endl;

    b.attack("Alpha");
    a.takeDamage(10);

    std::cout << std::endl;

    a.attack("Beta");
    a.beRepaired(3);

    std::cout << std::endl;

    b.beRepaired(4);
    b.attack("Alpha");

    std::cout << std::endl;

    return (0);
}