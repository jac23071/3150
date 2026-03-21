#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>
#include "validation.h"
#include "audit_mode.h"

using std::cout, std::cin, std::endl, std::string, std::ifstream, std::ofstream;
void process_file(string input, string output){
	string in_extension = input.substr(input.length() - 4, 4);
	string out_extension = output.substr(output.length() - 4, 4);
	//cout << "in: " << in_extension << endl;
	//cout << "out: " << out_extension << endl;
	string csv = ".csv";
	char in_dlmtr = (csv == in_extension) ? ',' : '\t';
	char out_dlmtr = (csv == out_extension) ? ',' : '\t';
	
	ifstream in_file(input);
	ofstream out_file;
	out_file.open(output, std::ios::app);
	if (!in_file || !out_file){
		cout << "Error opening file" << endl;

	}
	
	//std::istringstream line;
	while(1){
		string user, email, pass;
		std::getline(in_file, user, in_dlmtr);
		std::getline(in_file, email, in_dlmtr);
		std::getline(in_file, pass);

		if (!user.length() || !email.length() || !pass.length()){break;}

		if (!is_valid_password(pass)){
			out_file << user  << out_dlmtr  << email << out_dlmtr << pass << '\n';
		}
	}
	return;
}

void run_menu(){
	while(1){
		int choice;
		cout << "1. Check a single password\n2. Process a TSV/CSV file\n3. Quit" << endl;
		//cin.ignore()
		cin >> choice;

		switch(choice){
			case 1:{
				string password;
				cout << "Enter your password:" << endl;
				cin.ignore();
				std::getline(cin, password);
				int validity = is_valid_password(password);
				if(validity){cout << "Valid" << endl;}
				else{cout << "Invalid" << endl;}
				break;
			}
			case 2:{
				cout << "Input the input file path:"<< endl;
				//cin.ignore();
				string in_file;
				cin >> in_file;

				cout << "Input the output file path:" << endl;
				//cin.ignore();
				string out_file;
				cin >> out_file;

				process_file(in_file, out_file);
				break;
			}
			case 3:{
				exit(0);
				break;
			}
		
		}
	}	
	return;
}
