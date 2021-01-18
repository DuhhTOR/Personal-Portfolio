#include <iostream>
#include "electronicticket.h"
#include "dayet.h"
#include "regularet.h"
#include "personalet.h"


int main() {
	DayET firstDayET;
	DayET secondDayET(23);
	RegularET firstRegularET(1);
	RegularET secondRegularET(10);
	PersonalET firstPersonalET(1, "Janis", "Legzdins");
	PersonalET secondPersonalET(7, "Peteris", "Ozols");
	ElectronicTicket *ET[6] = {&firstDayET, &secondDayET, &firstRegularET, &secondRegularET, &firstPersonalET, &secondPersonalET};
	
	
	// Visu E-Talonu izvade //
	for (int i = 0; i < 6; i++) {
		if (i == 0 || i == 1) {
			if (i == 0) {
				std::cout << "1. ";
			}
			
			else {
				std::cout << "2. ";
			}

			std::cout << "Diennakts E-talons\n";
		}
		
		else if (i == 2 || i == 3) {
			if (i == 2) {
				std::cout << "1. ";
			}
			
			else {
				std::cout << "2. ";
			}
				
			std::cout << "Parastais E-talons\n";
		}
		
		else if (i == 4 || i == 5) {
			if (i == 4) {
				std::cout << "1. ";
			}
			
			else {
				std::cout << "2. ";
			}
			
			std::cout << "Personiskais E-talons\n";
		}
		
		ET[i]->print();
		
		if (i == 1 || i == 3) {
			std::cout << "\n";
		}
	}

	std::cout << "\n\n";
	system("pause");
	system("cls");
	
	
	// E-Talonu funkciju "Use()", "Add()" parbaude //
	std::cout << "1. Diennakts E-talons\n";
	firstDayET.print();
	std::cout << "//Izmantojam//\n";
	firstDayET.use();
	firstDayET.print();
	std::cout << "//Izmantojam//\n";
	firstDayET.use();
	std::cout << "2. Diennakts E-talons\n";
	secondDayET.print();
	std::cout << "//Izmantojam//\n";
	secondDayET.use();
	std::cout << "\n";
	
	std::cout << "1. Parastais E-talons\n";
	firstRegularET.print();
	std::cout << "//Izmantojam//\n";
	firstRegularET.use();
	firstRegularET.print();
	std::cout << "//Izmantojam//\n";
	firstRegularET.use();
	std::cout << "\n";
	
	std::cout << "1. Personiskais E-talons\n";
	firstPersonalET.print();
	std::cout << "//Izmantojam//\n";
	firstPersonalET.use();
	firstPersonalET.print();
	std::cout << "//Izmantojam//\n";
	firstPersonalET.use();
	std::cout << "//Pievienojam 2 braucienus//\n";
	firstPersonalET.add(2);
	firstPersonalET.print();
	std::cout << "//Izmantojam//\n";
	firstPersonalET.use();
	firstPersonalET.print();
	std::cout << "\n\n";
	
	
	system("pause");
	return 0;
}