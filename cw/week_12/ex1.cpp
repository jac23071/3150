#include <iostream>
#include <string>
#include <memory>
#include <vector>


using std::cout, std::endl;
class Student{
	std::string name;
	double mt_, final_;
	std::vector<double> homeworks_;
};

int main(){
	auto sp = std::make_shared<Student>();
	sp -> name = "Joe";
	sp -> mt_ = 80;
	sp -> final_ = 100;

}
