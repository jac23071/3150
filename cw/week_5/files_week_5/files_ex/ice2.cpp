#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main()
{	
	std::cout << "How many items to write?" << std::endl;
	int repeats;
	std::cin >> repeats;
	std::cin.ignore();
	std::ofstream file("entries.txt");
	if(!file) 
	{
		std::cerr << "failed to open" << std::endl;
		return 1;
	}
	for(int i = 0; i < repeats; i++)
	{
		std::cout << "Entry: ";
		std::string in;
		std::getline(std::cin, in);
		std::cin.ignore();
		file << in << std::endl;
	}
	return 0;
}
