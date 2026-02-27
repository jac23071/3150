#include <iostream>
#include <fstream>

using std::cerr, std::endl;
int main()
{
	std::ofstream file("log.txt", std::ios::app);
	file << "new entry!" << std::endl;
	
	std::ifstream file("data.txt);
	if (!file)
	{
		cerr << "Failed to open file" << endl;
	}

	file.close(); //will do this on its own at end of scope
	
	return 0;
}

