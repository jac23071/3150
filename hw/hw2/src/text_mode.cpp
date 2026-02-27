#include <iostream>
#include "text_mode.h"
#include <string>

namespace text_mode{
	void run (int argc, char* argv[]){
		if (argc < 3){
			std::cout << "Usage: Please input a string to analyze" << std::endl;
		}
		std::string target(argv[2]);
		std::cout << "Original " << target << std::endl;
		size_t str_size = target.size();
		std::cout << "Length " << str_size << std::endl;

		//count letters:
		size_t num_letters = 0;
		size_t num_digits = 0;
		size_t num_spaces = 0;
		size_t num_puncts = 0;

		for (char x: target){
			if (std::isalpha(x)){
				num_letters++;
			}
			if (std::isdigit(x)){
				num_digits++;
			}
			if (std::isspace(x)){
				num_spaces++;
			}
			if (std::ispunct(x)){
				num_puncts++;
			}

		}
		std::cout << "Letters " << num_letters << std::endl;
		std::cout << "Digits " << num_digits << std::endl;
		std::cout << "Spaces " << num_spaces << std::endl;
		std::cout << "Punctuation " << num_puncts << std::endl;
		
		char upper[str_size];
		char lower[str_size];
		for (size_t i = 0; i < str_size; i++){
			upper[i] = std::toupper(target[i]);
			target[i] = std::tolower(target[i])

		}
		std::cout << "Uppercase" << upper << std::endl;
		std::cout << "Lowercase" << target << std::endl;
		
		if(target.find("test", 0) != string::npos){
			std::cout << "containstestyes" << std::endl;
		} else {
			std::cout << "containstestno" << std::endl;
		}
		std::string sub = "";
		if(num_spaces > 0){
			int posit = target.find(" ");
			sub = target.substr(0, posit++);
		}
	}

}
