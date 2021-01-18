#include <iostream>
#include "cellphone.h"


Cellphone::Cellphone(int battery, int weight) : Phone(weight) {
	this->battery = battery;
}


const int Cellphone::getBattery() const {
	return this->battery;
}


const void Cellphone::printCellphone() const {
	Phone::printPhone();
	std::cout << "Baterija = " << this->battery << "mAh\n";
}