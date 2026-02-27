#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main()
{
	string first_name;
	string password;
	cout << "Enter your first name: ";
	cin >> first_name;
	cin.ignore();
	cout << "Enter your password: ";
	getline(cin, password);
	cout << "First Name " << first_name << endl;
	cout << "Password " << password << endl;

	return 0;
}
