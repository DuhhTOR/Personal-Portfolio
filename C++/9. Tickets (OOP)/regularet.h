#pragma once


#include "electronicticket.h"


class RegularET : public ElectronicTicket {
	public:
		RegularET(int = 1);
		const void print() const;
		void use();
		void add(int) {};
	
	private:
		int amountOfTrips;
};