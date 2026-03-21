#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

int main (){
	string s = "Hello";
	//fun fact: range based for loops are type-agnostic
	for (const char& c : s){
		cout << c << endl;
	}
	return 0;

}
