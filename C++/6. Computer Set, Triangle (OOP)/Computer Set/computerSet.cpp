#include <iostream>
#include <string>
#include "computer.h"
#include "monitor.h"
#include "computerSet.h"


ComputerSet::ComputerSet(std::string computerSetName, std::string computerCPU, std::string computerGPU, float computerPrice, std::string monitorManufacturer, std::string monitorResolution, float monitorPrice)
	: computer(computerCPU, computerGPU, computerPrice), monitor(monitorManufacturer, monitorResolution, monitorPrice) {
	this->setComputerSet(computerSetName);
}


void ComputerSet::setComputerSet(std::string computerSetName) {
	this->computerSetName = computerSetName;
}


std::string ComputerSet::getComputerSetName() const {
	return this->computerSetName;
}


float ComputerSet::getComputerSetPrice() const {
	return (this->computer.getComputerPrice() + this->monitor.getMonitorPrice());
}


void ComputerSet::printComputerSet() const {
	std::cout << "Komplekta nosaukums = " << this->computerSetName << "\n\n"
			  << "Datora specifikacija" << "\n";
	this->computer.printComputer();
	std::cout << "\n" << "Monitora specifikacija" << "\n";
	this->monitor.printMonitor();
	std::cout << "\n" << "Komplekta cena = " << this->getComputerSetPrice() << " EUR" << "\n";
}