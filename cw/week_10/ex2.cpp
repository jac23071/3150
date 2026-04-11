#include <iostream>
#include <string>

using std::cout, std:: cin, std::endl, std::string;
enum class Status{
	PENDING,
	APPROVED,
	REJECTED
};

int main(){
	Status s = Status::APPROVED;
	if(s == Status::APPROVED){
		cout << "Approved!" << endl;
	}
	int s = 0;
	if (s == 1){cout << "Approved!"<< endl;}
	return 0;
}
