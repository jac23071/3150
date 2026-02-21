#include <iostream>
#include "while_count_utils.h"
namespace while_count_utils{
	void runWhileCount(void){
		int upper_bound;
		std::cout << "Enter a number to count to:" << std::endl;
		std::cin >> upper_bound;
		while(upper_bound > 10){
			std::cout << "I'm programmed to only count up to 10!" << std::endl;
			std::cout << "Enter a number to count to:" << std::endl;
			std::cin >> upper_bound;			
		}
		int idx = 1;
		while(idx <= upper_bound){
			if(idx != 5){
				std::cout << idx << std::endl;
			}
			idx++;
		}
	}

}
