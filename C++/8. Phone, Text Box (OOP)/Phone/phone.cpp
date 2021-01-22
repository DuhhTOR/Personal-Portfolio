#include <iostream>
#include "phone.h"


Phone::Phone(int weight) {
	this->weight = weight;
}


const int Phone::getWeight() const {
	return this->weight;
}


const void Phone::printPhone() const {
	std::cout << "Svars = " << this->weight << "g\n";
}