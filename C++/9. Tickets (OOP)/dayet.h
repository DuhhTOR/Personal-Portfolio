#pragma once


#include "electronicticket.h"


class DayET : public ElectronicTicket {
	public:
		DayET(int = 0);
		const void print() const;
		void use();
		void add(int) {};
		
	private:
		int activationDate;
		bool activationStatus;
};