#include <iostream>

namespace do_while_count_utils{
	void runDoWhileCount(void){
		int var;
		do{
			std::cout << "Enter a number between 1 and 5:" << std::endl;
			std::cin >> var;
		}while(var < 1 || var > 5);

		int arr[5] = {1,2,3,4,5};
		for (int num : arr){
			if(num == var){
				break;
			}
			std::cout << "Value: " << num << std::endl;
		}
	}

}
