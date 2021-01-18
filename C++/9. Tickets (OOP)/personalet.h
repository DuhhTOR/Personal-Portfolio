#pragma once


#include <string>
#include "electronicticket.h"


class PersonalET : public ElectronicTicket {
	public:
		PersonalET(int = 0, std::string = "", std::string = "");
		void setPersonalET(int, std::string, std::string);
		int getAmountOfTrips() const;
		std::string getName() const;
		std::string getSurname() const;
		void print() const;
		void use();
		void add(int = 1);
		
	private:
		int amountOfTrips;
		std::string name, surname;
};