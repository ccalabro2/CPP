#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char** argv)
{
	if (argc != 4){
		std::cerr << "ERROR" << std::endl;
		return (1);
	}
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::string line;
	std::string file;
	std::ifstream ifs(fileName.c_str());
	if(!ifs.is_open() || !ifs){
		std::cerr << "FILE ERROR" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string outfile = fileName + ".replace";
	std::ofstream ofs(outfile.c_str());
	if(!ofs.is_open() || !ofs){
		std::cerr << "FILE ERROR" << std::endl;
		exit(EXIT_FAILURE);
	}

	while (std::getline(ifs, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		pos += s2.length();
		}
		ofs << line << std::endl;
	}
}
