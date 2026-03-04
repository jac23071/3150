#include <iostream>
#include "add_mode.h"
#include <string>

using std::string;
namespace add_mode{
	int add(int a, int b){return a + b;}

	double add(double a, double b){return a + b;}

	string add(string a, string b){return a + b;}
	
	void run(int argc, char * argv[]){
		if(argc < 4){
			std::cout << "Usage: ./analyzer <mode> <argument1> <argument2>" << std::endl;
			return;
		}
		
		string a(argv[2]);
		string b(argv[3]);

		int a_is_nonnumber = 0;
		int a_has_point = 0;
		
		if (a.find('.') != string::npos){
			a_has_point = 1;
		}

		for (char c : a){
			if (!std::isdigit(c) && c != '.'){
				a_is_nonnumber = 1;
				break;
			}
		}

		int b_is_nonnumber = 0;
		int b_has_point = 0;
		if (b.find('.') != string::npos){
			b_has_point = 1;
		}
		for (char c : b){
			if (!std::isdigit(c) && c != '.'){
				b_is_nonnumber = 1;
				break;
			}
		}
		 if (a_is_nonnumber || b_is_nonnumber){
			string result = add(a,b);
			std::cout << "Result: " << result << std::endl;
		 }else{
		 	if(a_has_point || b_has_point){
				double a = std::stod(argv[2]);
				double b = std::stod(argv[3]);
				double result = add(a, b);
				string res = std::to_string(result);
				std::cout << "Result: " << result << std::endl;
			}else{
				int a = std::stoi(argv[2]);
				int b = std::stoi(argv[3]);
				int result = add(a,b);
				string res = std::to_string(result);
				std::cout << "Result: " << result << std::endl;
			}
		}
		return;		 


	}
}
