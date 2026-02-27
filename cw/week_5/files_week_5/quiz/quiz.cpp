#include <iostream>
#include <string>
#include <cctype>

using std::string, std::cout, std::cin, std::endl;
int main()
{
	string password;
	while (true)
	{
		cout << "Enter password or q to quit: ";
		cin >> password;

		if (password == 'q')
		{
			cout << "Done!" << endl;
			break;
		}
		bool has_digit = false;
		bool has_upper = false;
		bool has_other = false;

		if (password.length() < 8)
		{
			cout << "invalid password" << endl;
			continue;
		}
		for (char c : password)
		{
			if (std::isdigit(c))
			{
				has_digit = true;
			}
			if (std::isupper(c))
			{
				has_upper = true;
			}
			if(!std::isalnum(c)
			{
				has_other = true;
			}
		}
		if (has_digit && has_upper && has_other)
		{
			cout << "valid" << endl;
		}
		else cout << "invalid" << endl;
	}
}
