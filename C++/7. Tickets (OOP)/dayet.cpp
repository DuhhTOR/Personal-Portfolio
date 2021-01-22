#pragma warning(disable : 4996)


#include <iostream>
#include <ctime>
#include "dayet.h"


DayET::DayET(int activationDate) {
	if (activationDate > 0) {
		this->activationDate = activationDate;
		this->activationStatus = true;
	}

	else {
		this->activationDate = activationDate;
		this->activationStatus = false;
	}
}


const void DayET::print() const {
	if (this->activationStatus == true) {
		std::cout << "Aktivizets: ja, Aktivizacijas datums: " << this->activationDate << "\n";
	}
	
	else {
		std::cout << "Aktivizets: ne\n";
	}
}


void DayET::use() {
	time_t t = time(NULL);
	tm* date = localtime(&t);
	
	if (this->activationStatus == false) {
		this->activationStatus = true;
		this->activationDate = date->tm_mday;
	}
	
	else {
		std::cout << "E-Talona deriguma statuss: ";
		
		if ((date->tm_mday - this->activationDate > 1) || (date->tm_mday - this->activationDate < -1)) {
			std::cout << "sarkans\n";
		}
		
		else {
			std::cout << "zals\n";
		}
	}
}