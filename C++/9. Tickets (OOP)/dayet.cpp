#pragma warning(disable : 4996)


#include <iostream>
#include <ctime>
#include "dayet.h"


DayET::DayET(int activationDate) {
	this->setDayET(activationDate);
}


void DayET::setDayET(int activationDate) {
	if (activationDate > 0) {
		this->activationDate = activationDate;
		this->activationStatus = true;
	}

	else {
		this->activationDate = activationDate;
		this->activationStatus = false;
	}
}


int DayET::getActivationDate() const{
	return this->activationDate;
}


bool DayET::getActivationStatus() const{
	return activationStatus;
}


void DayET::print() const {
	if (activationStatus == true) {
		std::cout << "Aktivizets: ja, Aktivizacijas datums: " << activationDate << "\n";
	}
	
	else {
		std::cout << "Aktivizets: ne\n";
	}
}


void DayET::use() {
	time_t t = time(NULL);
	tm* date = localtime(&t);
	
	if (activationStatus == false) {
		activationStatus = true;
		activationDate = date->tm_mday;
	}
	
	else {
		std::cout << "E-Talona deriguma statuss: ";
		
		if (date->tm_mday - activationDate > 1 || date->tm_mday - activationDate < -1) {
			std::cout << "sarkans\n";
		}
		
		else {
			std::cout << "zals\n";
		}
	}
}