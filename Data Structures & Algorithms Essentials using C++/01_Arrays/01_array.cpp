#include<iostream>

int markmain() {

	int marks[10] = {};

	int n;
	std::cout << "Enter the number of students: ";
	std::cin >> n;


	//Input
	for (int i = 1; i <= n; i++) {
		std::cout << "Enter the mark of student: ";
		std::cin >> marks[i];
	}

	//Output
	for (int i = 0; i < 10; i++) {
		std::cout << "Student mark is: ";
		std::cout << marks[i] << " ,";
	}

	std::cout << std::endl;


	return 0;
}