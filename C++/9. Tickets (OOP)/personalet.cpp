#include <iostream>
#include <string>
#include "personalet.h"


PersonalET::PersonalET(int amountOfTrips, std::string name, std::string surname) {
	this->amountOfTrips = amountOfTrips;
	this->name = name;
	this->surname = surname;
}


const void PersonalET::print() const {
	std::cout << "Braucienu skaits: " << this->amountOfTrips << ", Vards: " << this->name << ", Uzvards: " << this->surname << "\n";
}


void PersonalET::use() {
	std::cout << "E-Talona deriguma statuss: ";

	if (this->amountOfTrips > 0) {
		this->amountOfTrips--;
		std::cout << "zals" << "\n";
	}
	
	else {
		std::cout << "sarkans" << "\n";
	}
}


void PersonalET::add(int amountToAdd) {
	this->amountOfTrips += amountToAdd;
}