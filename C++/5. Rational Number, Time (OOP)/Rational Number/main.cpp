#include <iostream>
#include "rationalnumber.h"


int main() {
	RationalNumber firstNumber(1, 8);
	RationalNumber secondNumber(1, 4);
	RationalNumber thirdNumber;
	

	std::cin >> thirdNumber;
	
	std::cout << "\n\nFirst number = " << firstNumber
			  << "\nSecond number = " << secondNumber
			  << "\nThird number = " << thirdNumber << "\n\n\n";
	
	std::cout << "Saskaitisana\n";
	thirdNumber = secondNumber + firstNumber;
	std::cout  << secondNumber << " + " << firstNumber << " = " << thirdNumber << "\n";
	
	std::cout << "\nAtnemsana\n";
	thirdNumber = secondNumber - firstNumber;
	std::cout  << secondNumber << " - " << firstNumber << " = " << thirdNumber << "\n";
	
	std::cout << "\nReizinasana\n";
	thirdNumber = secondNumber * firstNumber;
	std::cout  << secondNumber << " * " << firstNumber << " = " << thirdNumber << "\n";
	
	std::cout << "\nDalisana\n";
	thirdNumber = secondNumber / firstNumber;
	std::cout  << secondNumber << " / " << firstNumber << " = " << thirdNumber << "\n\n";
	

	system("pause");
	system("cls");
	std::cout << "First number = " << firstNumber
			  << "\nSecond number = " << secondNumber
			  << "\nThird number = " << thirdNumber << "\n\n\n";

	std::cout << "Pieskirsana ar operatoru '='\n"
			  << "Third number = First number\n\n";
	thirdNumber = firstNumber;
	std::cout << "First number = " << firstNumber
			  << "\nSecond number = " << secondNumber
			  << "\nThird number = " << thirdNumber << "\n\n\n";
	
	std::cout << "Salidzinosie operatori\n"
			  << "First number == Third number?\t";
	if (firstNumber == thirdNumber) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "First number != Third number?\t";
	if (firstNumber != thirdNumber) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "First number > Second number?\t";
	if (firstNumber > secondNumber) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "First number < Second number?\t";
	if (firstNumber < secondNumber) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "First number >= Third number?\t";
	if (firstNumber >= thirdNumber) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "First number <= Third number?\t";
	if (firstNumber <= thirdNumber) {
		std::cout << "True\n\n";
	}

	else {
		std::cout << "False\n\n";
	}
	
	
	system("pause");
	return 0;
}