#ifndef CELLPHONE_H
#define CELLPHONE_H


#include "phone.h"


class Cellphone : public Phone {
	public:
		Cellphone(int = 0, int = 0);
		void setCellphone(int);
		int getBattery() const;
		void printCellphone() const;
		
	protected:
		int battery;
};


#endif