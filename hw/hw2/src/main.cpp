#include <iostream>
#include <string>
#include "text_mode.h"

using std::endl, std::cout, std::cin, std::string, std::size_t; 
int main (int argc, char * argv[]){
	if (argc < 3){cout << "./analyzer <mode> [arguments]"; return 1;}

	string mode(arg[1]);
	int mode_sig;

	if (mode == "text"){mode_sig = 1;}
	else if (mode == "add"){mode_sig = 2;}
	else if (mode == "stats"){mode_sig = 3;}
	else {cout << "Invalid mode" << endl; return 1;}

	switch mode_sig:
		case 1: {
			
			
		}
		case 2: {
			
		
		}
		case 3: {
			
			
		}


}
