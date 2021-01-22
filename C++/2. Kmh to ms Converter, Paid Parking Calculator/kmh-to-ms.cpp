#include <iostream>
#include <string>


float convertToMS(float speedKMH) {
	return ((speedKMH * 1000) / 3600);
}


float meetTime(float firstObjectSpeed, float secondObjectSpeed, float objectDistance) {
	return ((objectDistance * 1000) / (convertToMS(firstObjectSpeed) + convertToMS(secondObjectSpeed)));
}


int main() {
	std::string userInput;
	float firstObjectSpeed, secondObjectSpeed, objectDistance;


	std::cout << "Ievadiet atrumu km/h, lai parveidotu to uz m/s : ";
	while ((std::cin >> userInput) && userInput.find_first_not_of("1234567890.") != std::string::npos) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}
	std::cout << userInput << " km/h = " << convertToMS(stof(userInput)) << " m/s\n\n";


	std::cout << "Ievadiet 2 objektus kustibas atrumus km/h un attalumu starp objektiem km,\nlai aprekinatu to tiksanas laiku sekundes.\n";
	std::cout << "1. objekta kustibas atrums km/h : ";
	while ((std::cin >> userInput) && userInput.find_first_not_of("1234567890.") != std::string::npos) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}
	firstObjectSpeed = std::stof(userInput);

	std::cout << "2. objekta kustibas atrums km/h : ";
	while ((std::cin >> userInput) && userInput.find_first_not_of("1234567890.") != std::string::npos) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}
	secondObjectSpeed = std::stof(userInput);

	std::cout << "Attalums starp objektiem km : ";
	while ((std::cin >> userInput) && userInput.find_first_not_of("1234567890.") != std::string::npos) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}
	objectDistance = std::stof(userInput);

	std::cout << "\nObjekti satiksies pec " << meetTime(firstObjectSpeed, secondObjectSpeed, objectDistance) << " sekundem.\n";
	

	system("Pause");
	return 0;
}
