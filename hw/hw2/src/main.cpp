#include <iostream>
#include <string>
#include "text_mode.h"
#include "add_mode.h"
#include "stats_mode.h"

using std::endl, std::cout, std::cin, std::string, std::size_t; 
int main (int argc, char * argv[]){
	if (argc < 2){cout << "Usage: ./analyzer mode arguments\n" << endl; return 1;}

	string mode(argv[1]);
	int mode_sig;

	if (mode == "text"){mode_sig = 1;}
	else if (mode == "add"){mode_sig = 2;}
	else if (mode == "stats"){mode_sig = 3;}
	else {cout << "Invalid mode" << endl; return 1;}

	switch (mode_sig){
		case 1: {
			text_mode::run(argc, argv);
			break;
		}
		case 2: {
			add_mode::run(argc, argv);
			break;
		}
		case 3: {
			stats_mode::run(argc, argv);
			break;		
		}
	}

		return 0;


}
