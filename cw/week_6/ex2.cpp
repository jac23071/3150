#include <iostream>

using std::cout, std:: endl;
int main(){
	int * p = new int(42);
	cout << *p << endl;
	delete p;
	
	return 0;

}
