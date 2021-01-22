#pragma once


#include <string>
#include "cellphone.h"


class Smartphone : public Cellphone {
	public:
		Smartphone(std::string = "", int = 0, int = 0);
		const std::string getOperatingSystem() const;
		const void printSmartphone() const;
		
	private:
		std::string operatingSystem;
};