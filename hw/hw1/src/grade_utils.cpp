#include <iostream>
#include "grade_utils.h"

namespace grade_utils{
	double calculateGrade(void){
		char type;
		double grade;
		std::cout << "Enter student type (U for undergrad, G for grad):" << std::endl;
		std::cin >> type;
		std::cout << "Enter numeric grade:" << std::endl;
		std::cin >> grade;
		if(grade < 0 || grade > 100){
			std::cout << "Invalid grade" << std::endl;
			return -1;
		}
		if(type == 'U'){
			if(grade >= 60){
				std::cout << "Status: Pass" << std::endl;
			}else{
				std::cout << "Status: Fail" << std::endl;
			}
		}else if (type == 'G'){
			if(grade >= 70){
				std::cout << "Status: Pass" << std::endl;
			}
			else{
				std::cout << "Status: Fail" << std::endl;
			}
		}
		return grade;
	
	}


}
