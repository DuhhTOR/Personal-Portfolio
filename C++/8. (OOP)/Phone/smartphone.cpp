#include <iostream>
#include <string>
#include "smartphone.h"


Smartphone::Smartphone(std::string operatingSystem, int battery, int weight) : Cellphone(battery, weight) {
	this->setSmartphone(operatingSystem);
}


void Smartphone::setSmartphone(std::string operatingSystem) {
	this->operatingSystem = operatingSystem;
}


std::string Smartphone::getOperatingSystem() const {
	return this->operatingSystem;
}


void Smartphone::printSmartphone() const {
	Cellphone::printCellphone();
	std::cout << "OS = " << this->getOperatingSystem() << "\n";
}