#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int main()
{
	int line_count = 0;
	std::string line;
	std::ifstream file("data.txt");
	while(std::getline(file, line))
	{
		line_count++;
		
		int count = 0;
		bool in_word = false;
		for(char i : line)
		{
			if (!std::isspace(i)){
				if (!in_word){
					count++;
					in_word = true;
				}
			}
			else{
				in_word = false;
			}
		}
		std::cout << "Line " << line_count << " " << count << " words" << std::endl;
		
	}
	
}//There is a much better way
