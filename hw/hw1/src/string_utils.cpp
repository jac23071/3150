#include <iostream>

namespace string_utils{
	int runStringOption(void){
	/*This function intakes no arguments.
	 *However, when run it will intake an integer 
	 *for string length less than 20.
	 */
		int strlen;
		std::string fullString;
		std::cout << "Enter your string length:" << std::endl;
		std::cin >> strlen;
		if (strlen > 20){
			std::cout << "Error: string length must be <20" << std::endl;
			return 1;
		}	
		std::cin.ignore();
		std::cout << "Enter string:";
		std::getline(std::cin, fullString);
		char array[20];
		for(int i = 0; i< strlen-1; i++){
			array[i] = fullString[i]; 
		}
		array[strlen-1] = '\0';
		std::cout << "C-style string: " << array << std::endl;
		return 0;

	}



}
