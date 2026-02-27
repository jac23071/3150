#include <iostream>
#include <string>

using std::cout, std::cin, std::string, std::endl;

int main(int argc, char*argv[])
{
	int x;
	while (std::cin >> x)
	{
		std::cout << "Valid input" << std::endl;
	}
	return 0;
}
