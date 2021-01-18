#include <iostream>
#include "regularet.h"


RegularET::RegularET(int amountOfTrips) {
	this->setRegularET(amountOfTrips);
}


void RegularET::setRegularET(int amountOfTrips) {
	this->amountOfTrips = amountOfTrips;
}


int RegularET::getAmountOfTrips() const {
	return this->amountOfTrips;
}


void RegularET::print() const {
	std::cout << "Braucienu skaits: " << this->getAmountOfTrips() << "\n";
}


void RegularET::use() {
	std::cout << "E-Talona deriguma statuss: ";
	
	if (this->amountOfTrips > 0) {
		this->amountOfTrips--;
		std::cout << "zals\n";
	}
	
	else {
		std::cout << "sarkans\n";
	}
}