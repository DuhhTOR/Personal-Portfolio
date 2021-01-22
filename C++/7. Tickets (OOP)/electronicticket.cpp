#include <iostream>
#include "electronicticket.h"


ElectronicTicket::ElectronicTicket(int serialNumber) {
	this->serialNumber = serialNumber;
}


const void ElectronicTicket::print() const {
	std::cout << "Serijas numurs: " << this->serialNumber << "\n";
}