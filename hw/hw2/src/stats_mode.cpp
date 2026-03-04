#include <iostream>
#include "stats_mode.h"
#include <string>
#include <cctype>

using std::string;
namespace stats_mode{
	void run (int argc, char * argv[]){
		if (argc < 3){
			std::cout << "Usage: ./analyzer [mode] <argument>" << std::endl;
			return;
		}
		string str = argv[2];
		size_t length = str.size();
		std::cout << "Length " << length << std::endl;

		int is_alnum_only = 1;
		int num_uniq = 0;
		int is_uniq = 1;
		char used_letters[length + 1];
		used_letters[length] = '\0';

		for (char c: str){
			is_uniq = 1;
			if (!std::isalnum(c)){is_alnum_only = 0;}
			for(int i = 0; i < num_uniq; i++){
				if (used_letters[i] == c){
					is_uniq = 0;
					break;
				}
			}
			if(is_uniq == 1){
				used_letters[num_uniq] = c;
				num_uniq++;
			}
		}
		
		std::cout << "Unique " << num_uniq << std::endl;
		if(is_alnum_only == 1){
			std::cout << "Alphanumeric Yes" << std::endl;
		}else{
			std::cout << "Alphanumeric No" << std::endl;
		}
		
		char rev_str[length + 1];
		rev_str[length] = '\0';
		for(size_t i = 0; i < length; i++){
			rev_str[i] = str[length - 1 - i];
		}
		std::cout << "Reversed " << rev_str << std::endl;
		
		char no_space[length + 1];

		size_t ns_idx = 0;	
		for (size_t i = 0; i < length; i++){
			if(std::isspace(str[i])){
				continue;
			}
			no_space[ns_idx] = str[i];
			ns_idx++;
		}
		no_space[ns_idx] = '\0';


		std::cout << "Without spaces " << no_space << std::endl;
		int is_palendrome = 1;
		for(size_t i = 0; i < (ns_idx)/2; i++){
			if(std::tolower(no_space[i]) != std::tolower(no_space[ns_idx - 1 - i])){
				is_palendrome = 0;
				break;
			}
		}
		if(is_palendrome == 1){
			std::cout << "Palindrome Yes" << std::endl;
		}else{
			std::cout << "Palindrome No" << std::endl;
		}
		return;

	}
}
