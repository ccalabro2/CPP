#include "Harl.hpp"

int main(void){
	Harl test;
	test.complain("DEBUG");
	std::cout << "primo passo\n";
	test.complain("INFO");
	std::cout << "secondo passo\n";
	test.complain("WARNING");
	std::cout << "terzo passo\n";
	test.complain("ERROR");
	std::cout << "quarto passo\n";
	return (0);
}
