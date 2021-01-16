#include <iostream>
#include <string>


int main () {
	int guessedNumber;
	int rangeLow = 0, rangeHigh = 100;
	const int tries = 10;
	int timesTried = 0;
	std::string userInput;
	

	std::cout << "Dators centisies uzminet skaitli " << tries << " meginajumos.\n";
	std::cout << "Iedomajaties skaitli intervala no " << rangeLow << " - " << rangeHigh << "!\n";
	
	do{
		guessedNumber = (rangeLow + (rangeHigh + 1)) / 2;
		
		std::cout << "\nVai sis ir jusu skaitlis: " << guessedNumber << "?\n"
				  << "[0] - ne, [1] - ja: ";
		while ((std::cin >> userInput) && (userInput.find_first_not_of("01") != std::string::npos) || (userInput.length() != 1)) {
			std::cout << "Nepareiza ievade! Meginiet velreiz [0] - ne, [1] - ja: ";
		}
		timesTried++;
		
		if (userInput == "0") {
			std::cout << "Skaitlis ir mazaks vai lielaks par " << guessedNumber << "?\n";
			std::cout << "[0] - mazaks, [1] - lielaks: ";
			while ((std::cin >> userInput) && (userInput.find_first_not_of("01") != std::string::npos) || (userInput.length() != 1)) {
				std::cout << "Nepareiza ievade! Meginiet velreiz [0] - ne, [1] - ja: ";
			}

			if (userInput == "0") {
				rangeHigh = (rangeLow + (rangeHigh + 1)) / 2;
			}

			else {
				rangeLow = (rangeLow + (rangeHigh + 1)) / 2;
			}

			std::cout << "Atlikuso meginajumu skaits: " << tries - timesTried << "\n";
		}
		
		else {
			std::cout << "\nSkaitlis uzminets ar " << timesTried << ". meginajumu!\n\n";
			break;
		}
	} while (tries != timesTried);
	
	if (tries == timesTried) {
		std::cout << "\nDators nespeja uzminet skaitli " << tries << " meginajumos.\n\n";
	}


	system("Pause");
	return 0;
}