#include <iostream>
#include <string>
#include <cctype>
#include "validation.h"

using std::cout, std::cin, std::endl, std::string;
bool is_valid_password(string password){
	int is_long_enuff = 0;
	int has_upcase = 0;
	int has_nonalnum = 0;
	
	if (password.length() >= 8){is_long_enuff = 1;}

	for (const char& c: password){
		if(std::isupper(c)){has_upcase = 1;}
		if(!std::isalnum(c)){has_nonalnum = 1;}
	}
	
	if(is_long_enuff && has_upcase && has_nonalnum){
		return 1;	
	}else{
		return 0;	
	}
}
