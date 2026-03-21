#include <iostream>
#include <string>
#include "validation.h"
#include "audit_mode.h"

using std::string, std::cout, std::endl, std::cin;
int main(int argc, char * argv[]){
	int mode;
	if(argc == 3){
		mode = 1;

	}else if (argc == 1){
		mode = 2;

	} else{
		mode = 0;

	}
	
	if(mode == 0){
		exit(1);
	}
	else if(mode == 1){
		string input(argv[1]);
		string output(argv[2]);
		process_file(input, output);	
	
	}else if (mode == 2){
		run_menu();

	}

	return 0;
}
