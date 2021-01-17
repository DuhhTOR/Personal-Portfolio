#include <iostream>
#include "phone.h"


Phone::Phone(int weight) {
	this->setPhone(weight);
}


void Phone::setPhone(int weight) {
	this->weight = weight;
}


int Phone::getWeight() const {
	return this->weight;
}


void Phone::printPhone() const {
	std::cout << "Svars = " << this->getWeight() << "g\n";
}