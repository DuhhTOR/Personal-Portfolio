#include <iostream>
#include <string>
#include "triangle.h"


int main() {
	std::string userInput;
	float a, b, c;
	

	std::cout << "Ievadiet trisstura malas:\n"
			  << "a = ";
	while ((std::cin >> userInput) && userInput.find_first_not_of("1234567890.") != std::string::npos) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}
	a = stof(userInput);

	std::cout << "b = ";
	while ((std::cin >> userInput) && userInput.find_first_not_of("1234567890.") != std::string::npos) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}
	b = stof(userInput);

	std::cout << "c = ";
	while ((std::cin >> userInput) && userInput.find_first_not_of("1234567890.") != std::string::npos) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}
	c = stof(userInput);
	Triangle triangle(a, b, c);
	
	if (triangle.checkIfTriangle(a, b, c)) {
		std::cout << "\nTrisstura perimetrs: " << triangle.perimiter() << "\n"
				  << "Trisstura laukums: " << triangle.area() << "\n";

		if (triangle.checkIfRightAngledTriangle()) {
			std::cout << "Trissturis ir taisnlenka trissturis!" << "\n\n";
		}

		else {
			std::cout << "Trissturis nav taisnlenka trissturis!" << "\n\n";
		}
	}
	
	else {
		std::cout << "\nTrissturis ar sadam malam nav iespejams!" << "\n\n";
	}
	

	system("Pause");
	return 0;
}