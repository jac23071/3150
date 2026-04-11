#include <iostream>
#include <string>
#include <cctype>

using std::endl, std::cout, std::cin, std::string;
int main(){
	cout << "Input: ";
	string input;
	cin >> input;
	
	int num_mods = 0;
	for (char & c: input){
		if (num_mods % 2){
			c = std::tolower(c);
		}else{
			c = std::toupper(c);
		}
		num_mods++;
	}
	cout << "Output: " << input << endl;
	return 0;
}
