#include <iostream>
#include "time.h"


int main(){
	Time a, b, c;
	

	std::cout << "Ievadiet laiku!\n";
	std::cin >> a;
	system("cls");
	std::cout << "Laiks a: " << a << "\n";
	std::cout << "Laiks b: " << b << "\n";
	std::cout << "Laiks c: " << c << "\n";
	system("pause");
	system("cls");
	
	
	std::cout << "Laika pieskirsana c = b = a\n";
	c = b = a;
	std::cout << "Laiks a: " << a << "\n"
			  << "Laiks b: " << b << "\n"
			  << "Laiks c: " << c << "\n\n";
	
	++a;
	std::cout << "Laika palielinasna laikam a +1 sekunde: ";
	std::cout << a << "\n";
	
	a++;
	std::cout << "Laika palielinasna laikam a +1 minute: ";
	std::cout << a << "\n";
	
	--b;
	std::cout << "Laika samazinasana laikam b -1 sekunde: ";
	std::cout << b << "\n";
	
	b--;
	std::cout << "Laika samazinasana laikam b -1 minute: ";
	std::cout << b << "\n";
	system("pause");
	system("cls");
	
	
	std::cout << "Laika salidzinasana\n"
			  << "Laiks a: " << a << "\n"
			  << "Laiks b: " << b << "\n\n";
	
	cout << "a > b: " << (a > b ? "true\n" : "false\n");
	cout << "a < b: " << (a < b ? "true\n" : "false\n");
	cout << "a >= b: " << (a >= b ? "true\n" : "false\n");
	cout << "a <= b: " << (a <= b ? "true\n" : "false\n");
	cout << "a == b: " << (a == b ? "true\n" : "false\n");
	cout << "a != b: " << (a != b ? "true\n" : "false\n");
	cout << endl;
	
	
	system("pause");
	return 0;
}