#include <iostream>
#include "inclassex1.hpp"
#include "inclassex2.hpp"


int main(){
	int a = 5;
	int b = 6;
	
	if (CheckUtils::is_even(a)){
		std::cout << a << "is even" << std::endl;
	} else{
		std::cout << a << "is odd" << std::endl;
	}

	std::cout << "factorial(" << a << ") = " << MathExtras::factorial(a) << std::endl; 


}
