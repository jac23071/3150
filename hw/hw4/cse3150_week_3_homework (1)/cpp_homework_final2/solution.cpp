
#include <iostream>
#include <cstring>   // for strlen, strcpy

// TODO: function prototypes

// TODO: implement addStudent
void addStudent(char* name, double gpa, char* names[], double gpas[], int& size, int capacity){
	if (size >= capacity){
		throw std::runtime_error("\nList full");
	}
	names[size] = name;
	gpas[size] = gpa;
	size++;

	return;
	
}
// TODO: implement updateGPA
void updateGPA(double* gpaPtr, double newGpa){
	*gpaPtr = newGpa;

	return;

}
// TODO: implement printStudent
void printStudent(const char* name, const double& gpa){
	std::cout << name << std::endl;
	std::cout << gpa << std::endl;
	return;
	
}
// TODO: implement averageGPA
void averageGPA(const double gpas[], int size){
	if (size == 0){
		throw std::runtime_error("\nNo students");
	}

	std::cout << "Average GPA" << std::endl;
	double sum = 0;
	for(size_t i = 0; i < size; i++){
		sum += gpas[i];
	}

	std::cout << static_cast<int>(sum/size) << std::endl;
}


int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./program <capacity>" << std::endl;
        return 1;
    }

    int capacity = std::stoi(argv[1]);
    char* names[capacity];
    double gpas[capacity];
    int size = 0;

    int choice;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Add student\n";
        std::cout << "2. Update GPA\n";
        std::cout << "3. Print all students\n";
        std::cout << "4. Compute average GPA\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // TODO: implement menu logic
		char name[10];
		std::cout << "Input the name: " << std::endl;
		std::cin >> name;
		
		double gpa;
		std::cout << "Input the GPA: " << std::endl;
		std::cin >> gpa;
		
		try{
			addStudent(name, gpa, names, gpas, size, capacity);
		}catch (const char * msg){
			std::cout << msg << std::endl;
		}
                break;
            }
            case 2: {
                // TODO: implement menu logic
		int idx;
		std::cout << "Send index of desired GPA: " << std::endl;
		std::cin >> idx;
		double * gpaPtr = &gpas[idx];

		double newGpa;
		std::cout << "Send the new GPA: " << std::endl;
		std::cin >> newGpa;

		updateGPA(gpaPtr, newGpa);

                break;
            }
            case 3: {
                // TODO: implement menu logic
		for (size_t i = 0; i < size; i++){
			printStudent(names[i], gpas[i]);
		}

                break;
            }
            case 4: {
                // TODO: implement menu logic
		
		  
		try{
			averageGPA(gpas, size);
		}catch (const char * msg){
			std::cout << msg << std::endl;
		}
                break;
            }
            case 5: {
                std::cout << "Goodbye!" << std::endl;
                break;
            }
            default: {
                std::cout << "Invalid choice" << std::endl;
            }
        }
    } while (choice != 5);

    // TODO: free memory

    return 0;
}
