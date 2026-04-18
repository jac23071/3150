#include "complex.h"

int main(){

	Complex c1(1,2);
	Complex c2(3, -5);
	Complex c3 = c1 + c2;

	c1.print(std::cout);
	c2.print(std::cout);
	c3.print(std::cout);
	return 0;
}
