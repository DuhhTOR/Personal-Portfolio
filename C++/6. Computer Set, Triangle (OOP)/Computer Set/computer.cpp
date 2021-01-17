#include <iostream>
#include "computer.h"


Computer::Computer(std::string computerCPU, std::string computerGPU, float computerPrice) {
	this->setComputer(computerCPU, computerGPU, computerPrice);
}


void Computer::setComputer(std::string computerCPU, std::string computerGPU, float computerPrice) {
	this->computerCPU = computerCPU;
	this->computerGPU = computerGPU;
	this->computerPrice = computerPrice;
}


void Computer::printComputer() const {
	std::cout << "CPU = " << this->computerCPU << "\n"
			  << "GPU = " << this->computerGPU << "\n"
			  << "Cena = " << this->computerPrice << " EUR" << "\n";
}


std::string Computer::getComputerCPU() const {
	return this->computerCPU;
}


std::string Computer::getComputerGPU() const {
	return this->computerGPU;
}


float Computer::getComputerPrice() const {
	return this->computerPrice;
}