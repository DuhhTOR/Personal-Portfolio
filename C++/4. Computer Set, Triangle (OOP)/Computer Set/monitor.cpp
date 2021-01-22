#include <iostream>
#include <string>
#include "monitor.h"


Monitor::Monitor(std::string monitorManufacturer, std::string monitorResolution, float monitorPrice) {
	this->setMonitor(monitorManufacturer, monitorResolution, monitorPrice);
}


void Monitor::setMonitor(std::string monitorManufacturer, std::string monitorResolution, float monitorPrice) {
	this->monitorManufacturer = monitorManufacturer;
	this->monitorResolution = monitorResolution;
	this->monitorPrice = monitorPrice;
}


void Monitor::printMonitor() const {
	std::cout << "Razotajs = " << this->monitorManufacturer << "\n"
			  << "Izskirtspeja = " << this->monitorResolution << "\n"
			  << "Cena = " << this->monitorPrice << " EUR" << "\n";
}


std::string Monitor::getMonitorManufacturer() const {
	return this->monitorManufacturer;
}


std::string Monitor::getMonitorResolution() const {
	return this->monitorResolution;
}


float Monitor::getMonitorPrice() const {
	return this->monitorPrice;
}