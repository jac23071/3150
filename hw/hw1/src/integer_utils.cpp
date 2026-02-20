#include <iostream>
#include "integer_utils.h"
namespace integer_utils{
	void runIntegerOption(void){
		int int_1;
		int int_2;

		std::cout << "Enter first integer:" << std::endl;
		std::cin >> int_1;
		std::cout << "Enter second integer:" << std::endl;
		std::cin >> int_2;

		if (int_2 == 0){
			std::cout << "Error: division by zero" << std::endl;
			return;
		}

		std::cout << "Result: " << int_1/int_2 
			<< std::endl
			//Now the below operations will modify the first intger
			<< "After post-increment: "
			<< int_1++
			<<" "
			<< "After pre-increment: "
			<< ++int_1
			<<std::endl;
		return;



	}


}
