#include <iostream>

using std::endl, std::cout, std::string, std::cin;
int divide(int a, int b){
	if (b == 0){throw std::runtime_error("zero divis");}
	return a/b;
}

int main(){
	try{
		cout << divide(10, 0) << endl;
	} catch (const std:: exception& e){
		cout << "Error" << e.what() << endl;
	}
	
	return 0;
}
