#include <iostream>
#include <unordered_set>
#include <unordered_map>

using std::cin, std::endl, std::cout, std::string;
int main(){
	cout << "Input: ";
	string str;
	std::getline(cin, str);
	std::unordered_set<char> letters;
	
	for (const char& c: str){
		letters.insert(c);
	}

	string uniq_letters = "";
	for (const auto& c: letters){
		str += c;
	}

	cout << uniq_letters << endl;
}
