#include <iostream>
#include <cctype>
#include <string>
#include <unordered_map>

using std::endl, std::string, std::cout;

int main(){
	std::unordered_map<int, string> students;
	students[7] =  "John Doe";
	students[1002] = "jane Doe";
	cout << students[7] << endl;
	
	return 0;

}
