#include <iostream>

//rem: use \n for fast printing, use endl when you need to flush the buffer
int main(){
	int age;
	std::cout << "Enter your age: ";
	std::cin >> age;
	std::cout << "Gimme ur name, dude: ";
	std::string name;
	std::cin >> name;
	std::cout << "You entered: " << age << " " << name << std::endl;
	return 0;



}
