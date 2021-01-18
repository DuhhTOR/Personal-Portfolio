#include <iostream>
#include <string>
#include "functions.h"

int main() {
	std::string userInput;
	int menu;
	
	do {
		system("cls");
		std::cout << "\tGalvena izvelne\n"
				  << "--------------------------------\n"
				  << "[1] Pievienot ierakstu.\n"
				  << "[2] Dzest ierakstu.\n"
				  << "[3] Izvadit visus ierakstus.\n"
				  << "[4] Atrast ierakstu.\n"
				  << "[5] Izmainit konta balansu.\n"
				  << "[6] Izvadit paradniekus.\n"
				  << "[7] Saskaitit ierakstus.\n"
				  << "[8] Izveidot datu bazes kopiju.\n"
				  << "[9] Iziet.\n"
				  << "Izvele: ";
		while ((std::cin >> userInput) && (userInput.find_first_not_of("123456789") != std::string::npos) || (userInput.length() != 1)) {
			std::cout << "Nepareiza ievade! Meginiet velreiz: ";
		}
		menu = stoi(userInput);

		switch(menu){
			case 1: 
				addEntry();
				break;
						
			case 2: 
				removeEntry();
				break;
						
			case 3: 
				printAll();
				break;
						
			case 4: 
				findEntry();
				break;
						
			case 5: 
				changeBalance();
				break;
						
			case 6:
				printDeptors();
				break;
						
			case 7:
				countEntries();
				break;
						
			case 8:
				makeCopy();
				break;
				
			case 9:
				std::cout << " ";
				break;
		}
	} while (menu != 9);
	

	system("Pause");
	return 0;
}