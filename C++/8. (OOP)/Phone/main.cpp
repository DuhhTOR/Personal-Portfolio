#include <iostream>
#include "phone.h"
#include "cellphone.h"
#include "smartphone.h"


int main() {
	Smartphone smartphone("iOS", 3500, 170);
	Cellphone cellphone(4000, 147);
	Phone phone(159);
	
	
	std::cout << "SmartPhone\n";
	smartphone.printSmartphone();
	std::cout << "\nCellPhone\n";
	cellphone.printCellphone();
	std::cout << "\nPhone\n";
	phone.printPhone();
	std::cout << "\n";
	
	std::cout << "\nPieklusana bazes klases datiem\n"
		      << "SmartPhone:\n"
			  << "battery = " << smartphone.getBattery() << "\n"
			  << "weight = " << smartphone.getWeight() << "\n"
			  << "\nCellPhone:\n"
			  << "weight = " << cellphone.getWeight() << "\n\n";
	
	
	system("Pause");
	return 0;
}