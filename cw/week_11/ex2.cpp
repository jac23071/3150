#include <iostream>
#include <stack>
#include <vector>

using std::vector, std::shared_ptr, std::string, std::endl, std::cin, std::cout, std::stack;
template <class T>
T sum(const vector<T>& vec){
	T ttl{};
	for (T x : vec){ttl += x};
	
	return ttl;
}

int main(){
	vector<int> v = {1,2,3,4,5};
	cout << sum(vec) << endl;
}

