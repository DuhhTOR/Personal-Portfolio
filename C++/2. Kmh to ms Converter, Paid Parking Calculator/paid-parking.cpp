#include <iostream>
#include <string>


float price(float hours) {
	float sum = 2.00;								//minimala summa, lai atstatu masinu parkinga
	float pricePerHour = 0.50;						//pec 3h, 0.50 eiro par katru stundu
	

	for(int i = 3; i < hours; i++) {
		sum += pricePerHour;
	}

	return sum;
}


int main() {
	std::string userInput;
	float hours;


	std::cout << "Ievadiet stundu skaitu: ";
	while ((std::cin >> userInput) && userInput.find_first_not_of("1234567890.") != std::string::npos) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}
	hours = stof(userInput);

	if (hours == 0.00) {
		std::cout << "Par " << hours << "h, autostavvietas maksa ir 0 eiro!\n\n";
	}

	else if ((hours > 0.00) && (hours < 3.00)) {
		std::cout << "Par " << hours << "h, autostavvietas maksa ir 2 eiro!\n\n";
	}

	else if (hours >= 19.00) {
		std::cout << "Par " << hours << "h, autostavvietas maksa 10 eiro!\n\n";
	}

	else {
		std::cout << "Par " << hours << "h, autostavvietas maksa ir " << price(hours) << " eiro!\n\n";
	}


	system("Pause");
	return 0;
}
