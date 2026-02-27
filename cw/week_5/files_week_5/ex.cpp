#include <iostream>
#include <string>
#include <cctype>


using std::cout, std::endl, std::string;

int main()
{
	string s = "John Doe";
	string first = s.substr(0, 4);
	string last = s.substr(5);
	cout << first << endl << last << endl;

	string text = "hello world";
	if (text.contains("world")) 
	{
		cout << "Found it!" << endl;
	}
	string upper = "";
	for (size_t i = 0; i < text.size(); i++)
	{
		text[i] = std::toupper(text[i]);
		cout << text << endl;
	}
	return 0;
}
