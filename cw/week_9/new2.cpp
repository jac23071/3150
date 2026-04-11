#include <unordered_set>
#include <iostream>

int main(){
	std::string str = "no";
	std::unordered_set<char> repeat;
	int has_repeats = 0;

	for (const char& c : str){
		if (!repeat.contains(c)){
			repeat.insert(c);
		}else{
			has_repeats = 1;
			break;
		}
	}
	
	if(has_repeats){ std::cout << "true" << std::endl;}
	else{std::cout << "false" << std::endl;}

	return 0;
}
