#include <iostream>
//using namespace std; (bad)
using std::endl;
using std::cout;

namespace MATH{
	int add(int a, int b){
		return a + b;
	}
}
int main(void){
	cout << "Hello World!" << MATH::add(1, 2) << endl;
	return 0;
}

