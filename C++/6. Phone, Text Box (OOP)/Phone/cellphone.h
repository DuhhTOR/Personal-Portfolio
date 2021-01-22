#pragma once


#include "phone.h"


class Cellphone : public Phone {
	public:
		Cellphone(int = 0, int = 0);
		const int getBattery() const;
		const void printCellphone() const;
		
	protected:
		int battery;
};