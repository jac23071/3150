#include <sstream>
#include <string>
#include <iostream>

int main()
{
	std::string line = "This is the end of the world as we know it";
	std::istringstream iss(line);
	std::string word;
	
	int count = 0;

	while (iss >> word)
	{
		count++;
	}
	std::cout << count << std::endl;
	return 0;
}
