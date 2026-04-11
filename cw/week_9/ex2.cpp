#include <iostream>

using std::endl, std::cout, std::cin, std::string;
int sumCharacters(const string & str){
	int sum = 0;
	for(const char & c: str){
		sum += static_cast<int>(c);
	}
	return sum;
}

int main(){
	string input;
	cout << "Input: ";
	std::getline(cin, input);
	int sum = sumCharacters(input);
	cout << " " << sum << " " << endl;
}
