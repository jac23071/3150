#include <iostream>
#include <vector>

using std::cin, std::string, std::cout, std::endl, std::vector;

void add_one(int * x){
	*x = *x + 1;
}

void swap(int&  a, int& b){
	int temp = a;
	a = b;
	b = temp;
	return;
}
void dbl(vector<int> * v){

	for(int i = 0; i < v -> size(); i++){
		*(v -> data() + i) = 2 * *(v -> data() + i);
	}

	return;
}
int main(){
	//int a = 5;
	//int& r = a;
	//r = 10;

	//add_one(&a);
	//cout << a << endl;
	//cout << r << endl;
	

	//int x = 1, y = 2;
	//swap(x, y);
	//cout << x << " " << y << endl;
	
	//vector<int> init = {1,2,3,4};
	//dbl(&init);
	
	//for (int x: init){
	//	cout << x << endl;
	//}
	string s;
	cout << "Input message:" << endl;
	std::getline(cin, s);
	for (int i = 0; i < s.size() + 2; i++){
		cout << "*";
	}
	cout << endl;
	cout << "*" << s << "*" << endl;
	for (int i = 0; i < s.size() + 2; i++){
		cout << "*";
	}
	cout << endl;
	
	return 0;
}
