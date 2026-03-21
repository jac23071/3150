#ifndef AUDIT_MODE
#define AUDIT_MODE
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>

using std::cout, std::cin, std::endl, std::string, std::ifstream, std::ofstream;
void process_file(string input, string output);
void run_menu();
#endif
