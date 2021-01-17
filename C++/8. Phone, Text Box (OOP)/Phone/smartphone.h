#pragma once


#include <string>
#include "cellphone.h"


class Smartphone : public Cellphone {
	public:
		Smartphone(std::string = "", int = 0, int = 0);
		void setSmartphone(std::string);
		std::string getOperatingSystem() const;
		void printSmartphone() const;
		
	private:
		std::string operatingSystem;
};