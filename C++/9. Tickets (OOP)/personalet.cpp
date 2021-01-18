#include <iostream>
#include <string>
#include "personalet.h"


PersonalET::PersonalET(int amountOfTrips, std::string name, std::string surname) {
	this->setPersonalET(amountOfTrips, name, surname);
}


void PersonalET::setPersonalET(int amountOfTrips, std::string name, std::string surname) {
	this->amountOfTrips = amountOfTrips;
	this->name = name;
	this->surname = surname;
}


int PersonalET::getAmountOfTrips() const {
	return this->amountOfTrips;
}


std::string PersonalET::getName() const {
	return this->name;
}


std::string PersonalET::getSurname() const {
	return this->surname;
}


void PersonalET::print() const {
	std::cout << "Braucienu skaits: " << this->getAmountOfTrips() << ", Vards: " << this->getName() << ", Uzvards: " << this->getSurname() << "\n";
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