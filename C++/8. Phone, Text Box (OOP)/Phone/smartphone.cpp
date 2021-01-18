#include <iostream>
#include <string>
#include "smartphone.h"


Smartphone::Smartphone(std::string operatingSystem, int battery, int weight) : Cellphone(battery, weight) {
	this->operatingSystem = operatingSystem;
}


const std::string Smartphone::getOperatingSystem() const {
	return this->operatingSystem;
}


const void Smartphone::printSmartphone() const {
	Cellphone::printCellphone();
	std::cout << "OS = " << this->operatingSystem << "\n";
}