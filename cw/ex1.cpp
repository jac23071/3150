#include <iostream>
#include <string>

int main(int argc, char * argv[]){
	std::string str_a = argv[1];
	std::string str_b = argv[2];
	
	int a = std::stoi(str_a);
	int b = std::stoi(str_b);
	std::cout << a + b << std::endl;
	return 0;



}
