#include <iostream>
#include "time.h"


int main() {
	Time a, b, c;
	

	std::cout << "Ievadiet laiku 'a'!\n";
	std::cin >> a;

	std::cout << "\nLaiks a: " << a << "\n";
	std::cout << "Laiks b: " << b << "\n";
	std::cout << "Laiks c: " << c << "\n\n";
	system("pause");
	
	std::cout << "\n\nLaika pieskirsana c = b = a\n";
	c = b = a;
	std::cout << "Laiks a: " << a << "\n"
			  << "Laiks b: " << b << "\n"
			  << "Laiks c: " << c << "\n\n";
	
	++a;
	std::cout << "Laika palielinasna laikam a +1 sekunde (++a): ";
	std::cout << a << "\n";
	
	a++;
	std::cout << "Laika palielinasna laikam a +1 minute (a++): ";
	std::cout << a << "\n";
	
	--b;
	std::cout << "Laika samazinasana laikam b -1 sekunde (--b): ";
	std::cout << b << "\n";
	
	b--;
	std::cout << "Laika samazinasana laikam b -1 minute (b--): ";
	std::cout << b << "\n\n";
	system("pause");
	system("cls");
	
	std::cout << "Laika salidzinasana\n"
			  << "Laiks a: " << a << "\n"
			  << "Laiks b: " << b << "\n\n";
	
	std::cout << "a > b: ";
	if (a > b) {
		std::cout << "true\n";
	}

	else {
		std::cout << "false\n";
	}

	std::cout << "a < b: ";
	if (a < b) {
		std::cout << "true\n";
	}

	else {
		std::cout << "false\n";
	}

	std::cout << "a >= b: ";
	if (a >= b) {
		std::cout << "true\n";
	}

	else {
		std::cout << "false\n";
	}

	std::cout << "a <= b: ";
	if (a <= b) {
		std::cout << "true\n";
	}

	else {
		std::cout << "false\n";
	}

	std::cout << "a == b: ";
	if (a == b) {
		std::cout << "true\n";
	}

	else {
		std::cout << "false\n";
	}

	std::cout << "a != b: ";
	if (a != b) {
		std::cout << "true\n\n";
	}

	else {
		std::cout << "false\n\n";
	}
	
	
	system("pause");
	return 0;
}