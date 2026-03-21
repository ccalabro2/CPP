#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap j("Jhonny");
    ScavTrap t("Tony");

    std::cout << std::endl;

    j.attack("Tony");
    t.takeDamage(20);

    std::cout << std::endl;

    t.attack("Jhonny");
    j.takeDamage(20);

    std::cout << std::endl;

    j.beRepaired(10);
    t.beRepaired(5);

    std::cout << std::endl;

    j.guardGate();
    t.guardGate();

    std::cout << std::endl;

    return (0);