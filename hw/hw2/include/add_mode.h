#ifndef ADD_MODE
#define ADD_MODE
#include <iostream>
#include <string>

using std::string;
namespace add_mode{
	int add(int a, int b);

	double add(double a, double b);
	
	string add(string a, string b);

	void run(int argc, char * argv[]);
}
#endif
