#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

int main(){
	vector<int> v;  
	v.reserve(1000);
	v.push_back(1);
	int * p = v.data();
	v.push_back(2);
	cout << p << endl;
	cout << v.data() << endl;
	return 0;
}
