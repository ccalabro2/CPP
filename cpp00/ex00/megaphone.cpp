#include <iostream>
#include <cctype>

int main(int argc , char **argv)
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int j = 0;
	int i = 1;
	while(i < argc)
	{
		while(argv[i][j])
		{
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		std::cout << " ";
		i++;
		j = 0;
	}
	std::cout << std::endl;
	return 0;
}
