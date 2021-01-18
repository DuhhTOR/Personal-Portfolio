#include <iostream>
#include "regularet.h"


RegularET::RegularET(int amountOfTrips) {
	this->amountOfTrips = amountOfTrips;
}


const void RegularET::print() const {
	std::cout << "Braucienu skaits: " << this->amountOfTrips << "\n";
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