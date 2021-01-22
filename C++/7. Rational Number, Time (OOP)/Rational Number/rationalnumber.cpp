#include <iostream>
#include <string>
#include "rationalnumber.h"


std::ostream& operator<<(std::ostream& output, const RationalNumber& object) {
	output << object.numerator << "/" << object.denominator;

	return output;
}


std::istream& operator>>(std::istream& input, RationalNumber& object) {
	std::string userInput;


	std::cout << "Ievadiet skaititaju: ";
	while ((input >> userInput) && (userInput.find_first_not_of("1234567890") != std::string::npos)) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}
	object.numerator = stoi(userInput);

	std::cout << "Ievadiet sauceju: ";
	do {
		while ((input >> userInput) && (userInput.find_first_not_of("1234567890") != std::string::npos)) {
			std::cout << "Nepareiza ievade! Meginiet velreiz: ";
		}

		if (stoi(userInput) == 0) {
			std::cout << "Saucejs nedrikst but '0'! Meginiet velreiz: ";
		}
	} while (stoi(userInput) == 0);
	object.denominator = stoi(userInput);

	object.reduceFraction();

	return input;
}


RationalNumber::RationalNumber(int numerator, int denominator) {
	this->numerator = numerator;

	if (denominator == 0) {
		std::cout << "Saucejs nedrikst but '0'! Saucejs aizstats ar '1'\n";
		this->denominator = 1;
	}

	else {
		this->denominator = denominator;
	}

	this->reduceFraction();
}


void RationalNumber::reduceFraction() {
	int commonFactor = this->findGreatestCommonDivisor(this->numerator, this->denominator);
	
	this->numerator /= commonFactor;
	this->denominator /= commonFactor;
}


const int RationalNumber::findGreatestCommonDivisor(int firstNumber, int secondNumber) const {
	if (firstNumber == 0) {
		return secondNumber;
	}

	return this->findGreatestCommonDivisor((secondNumber % firstNumber), firstNumber);
}


const RationalNumber RationalNumber::operator+(const RationalNumber &secondObject) const {
	RationalNumber objectCopy = *this;
	

	objectCopy.denominator = findGreatestCommonDivisor(this->denominator, secondObject.denominator);
	objectCopy.denominator = (this->denominator * secondObject.denominator) / objectCopy.denominator;
	objectCopy.numerator = this->numerator * (objectCopy.denominator / this->denominator) + secondObject.numerator * (objectCopy.denominator / secondObject.denominator);
	objectCopy.reduceFraction();
	
	return objectCopy;
}


const RationalNumber RationalNumber::operator-(const RationalNumber &secondObject) const {
	RationalNumber objectCopy = *this;
	

	objectCopy.denominator = findGreatestCommonDivisor(this->denominator, secondObject.denominator);
	objectCopy.denominator = (this->denominator * secondObject.denominator) / objectCopy.denominator;
	objectCopy.numerator = this->numerator * (objectCopy.denominator / this->denominator) - secondObject.numerator * (objectCopy.denominator / secondObject.denominator);
	objectCopy.reduceFraction();
	
	return objectCopy;
}


const RationalNumber RationalNumber::operator*(const RationalNumber &secondObject) const {
	RationalNumber objectCopy = *this;
	

	objectCopy.numerator *= secondObject.numerator;
	objectCopy.denominator *= secondObject.denominator;
	objectCopy.reduceFraction();
	
	return objectCopy;
}


const RationalNumber RationalNumber::operator/(const RationalNumber &secondObject) const {
	RationalNumber objectCopy = *this;
	

	objectCopy.numerator *= secondObject.denominator;
	objectCopy.denominator *= secondObject.numerator;
	objectCopy.reduceFraction();
	
	return objectCopy;
}


RationalNumber & RationalNumber::operator=(const RationalNumber &secondObject) {
	this->numerator = secondObject.numerator;
	this->denominator = secondObject.denominator;
	
	return *this;
}


const bool RationalNumber::operator==(const RationalNumber &secondObject) const {
	if ((this->numerator == secondObject.numerator) && (this->denominator == secondObject.denominator)) {
		return true;
	}
	
	else {
		return false;
	}
}


const bool RationalNumber::operator!=(const RationalNumber &secondObject) const {
	return !(*this == secondObject);
}


const bool RationalNumber::operator>(const RationalNumber &secondObject) const {
	if ((float)this->numerator / (float)this->denominator > (float)secondObject.numerator / (float)secondObject.denominator) {
		return true;
	}
		
	else {
		return false;
	}
}


const bool RationalNumber::operator<(const RationalNumber &secondObject) const {
	if ((float)this->numerator / (float)this->denominator < (float)secondObject.numerator / (float)secondObject.denominator) {
		return true;
	}
		
	else {
		return false;
	}
}


const bool RationalNumber::operator>=(const RationalNumber &secondObject) const {
	if (*this == secondObject) {
		return true;
	}
	
	else if (*this > secondObject) {
		return true;
	}
	
	else {
		return false;
	}
}


const bool RationalNumber::operator<=(const RationalNumber &secondObject) const {
	if (*this == secondObject) {
		return true;
	}
	
	else if (*this < secondObject) {
		return true;
	}
	
	else {
		return false;
	}
}