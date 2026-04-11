#include <iostream>
#include <string>


using std::cout, std::endl, std::cin, std::string;
struct Rectangle{
	double width;
	double height;
	double area(){return this -> width * this -> height;}
};

struct Student {
	int id;
	double gpa;
	string name;
};

int main(){
	Student s1;
	s1.name = "John Doe";
	s1.id = 1001;
	s1.gpa = 3.98;
	Rectangle r;
	r.width = 5;
	r.height = 2;
	cout << r.area() << endl;

}
