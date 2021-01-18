#include <iostream>
#include "electronicticket.h"


ElectronicTicket::ElectronicTicket(int serialNumber) {
	this->setElectronicTicket(serialNumber);
}


void ElectronicTicket::setElectronicTicket(int serialNumber) {
	this->serialNumber = serialNumber;
}


int ElectronicTicket::getSerialNumber() const {
	return this->serialNumber;
}


void ElectronicTicket::print() const {
	std::cout << "Serijas numurs: " << this->getSerialNumber() << "\n";
}