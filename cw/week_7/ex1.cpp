#include <iostream>

using std::cout, std::endl;

int main(){
	int * px = new int[10];
	for (int i = 0; i < 10; i++){
		px[i] = i;
	}
	for (int i = 0; i < 10; i++){
		
		cout << "px[" << i << "]=" << px[i] << endl;
	}
	delete[] px;


}
