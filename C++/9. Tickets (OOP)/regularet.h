#pragma once


#include "electronicticket.h"


class RegularET : public ElectronicTicket {
	public:
		RegularET(int = 1);
		void setRegularET(int);
		int getAmountOfTrips() const;
		void print() const;
		void use();
		void add(int) {};
	
	private:
		int amountOfTrips;
};