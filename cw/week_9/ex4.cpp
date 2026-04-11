#include <iostream>
#include <unordered_map>

using std::string, std::cout, std::cin, std::endl;
int main(){
	cout << "Input: ";
	string input;
	std::getline(cin, input);
	
	std::unordered_map<char, int> freq;

	for (const char & c: input){
		freq[c] = 0;	
	}

	for(const char & c: input){
		freq[c] += 1;
	}

	for (const auto& pair: freq){
		cout << pair.first << " -> " << pair.second << endl;
	}

	return 0;
}
