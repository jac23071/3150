#include <iostream>
#include "string_utils.h"
#include "integer_utils.h"
#include "grade_utils.h"
#include "while_count_utils.h"
#include "do_while_count_utils.h"

int main(){
	int tf = 1;
	while(tf){
		std::cout << "1. Integer operations\n"
			<< "2. Character arrays and C-style string\n"
			<< "3. Grade evaluation\n"
			<< "4. While-loop counting\n"
			<< "5. Do-while and range-based for counting\n"
			<< "6. Quit"
			<< std::endl;
		int selection;
		std::cin >> selection;
		switch (selection){
		       
			case 1:{ 
				integer_utils::runIntegerOption();
				break;
			}
			case 2:{ 
				int check = string_utils::runStringOption();
				if (check == 1){
					return 1;
				}
				break;
			}
			case 3:{ 
				double grade = grade_utils::calculateGrade();
				if (grade == -1){
					return 1;
				}
				break;
			}
			case 4:{
				while_count_utils::runWhileCount(); 
				break;
			}
			case 5:{
				do_while_count_utils::runDoWhileCount(); 
				break;
			}
			case 6:{ 
				std::cout << "Goodbye!" << std::endl;
				tf = 0;
				break;
			}
		}
	}




}
