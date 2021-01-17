#include <iostream>
#include "cellphone.h"


Cellphone::Cellphone(int battery, int weight) : Phone(weight) {
	this->setCellphone(battery);
}


void Cellphone::setCellphone(int battery) {
	this->battery = battery;
}


int Cellphone::getBattery() const {
	return this->battery;
}


void Cellphone::printCellphone() const {
	Phone::printPhone();
	std::cout << "Baterija = " << this->getBattery() << "mAh\n";
}