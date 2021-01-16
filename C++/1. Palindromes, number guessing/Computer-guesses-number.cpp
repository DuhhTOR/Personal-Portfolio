#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>


int main () {
	time_t t;
	srand((unsigned) time(&t));
	int guessedNumber;
	int rangeLow = 0, rangeHigh = 100;
	const int tries = 10;
	int timesTried = 0;
	int firstUserInput, secondUserInput;
	

	std::cout << "Dators centisies uzminet skaitli " << tries << " meginajumos.\n";
	std::cout << "Iedomajaties skaitli intervala no " << rangeLow << " - " << rangeHigh << "!\n";
	
	do{
		guessedNumber = (rangeLow + (rangeHigh + 1)) / 2;
		
		std::cout << "\nVai sis ir jusu skaitlis: " << guessedNumber << "?\n"
				  << "[0] - ne, [1] - ja: ";
		std::cin >> firstUserInput;
		while ((firstUserInput > 1 || firstUserInput < 0) || std::cin.fail() || std::cin.peek() != '\n') {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Nepareiza ievade! Ievadiet [0] - ne, [1] - ja: ";
			std::cin >> firstUserInput;
		}
		timesTried++;
		
		if (firstUserInput == 1) {
			std::cout << "\nSkaitlis uzminets ar " << timesTried << ". meginajumu!\n\n";
			break;
		}
		
		else {
			std::cout << "Skaitlis ir mazaks vai lielaks par " << guessedNumber << "?\n";
			std::cout << "[0] - mazaks, [1] - lielaks: ";
			std::cin >> secondUserInput;
			while ((secondUserInput > 1 || secondUserInput < 0) || std::cin.fail() || std::cin.peek() != '\n') {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Nepareiza ievade! Ievadiet [0] - mazaks, [1] - lielaks: ";
				std::cin >> secondUserInput;
			}

			if (secondUserInput == 0) {
				rangeHigh = (rangeLow + (rangeHigh + 1)) / 2;
			}

			else {
				rangeLow = (rangeLow + (rangeHigh + 1)) / 2;
			}

			std::cout << "Atlikuso meginajumu skaits: " << tries - timesTried << "\n";
		}
	} while (tries != timesTried);
	
	if (tries == timesTried) {
		std::cout << "\nDators nespeja uzminet skaitli " << tries << " meginajumos.\n\n";
	}


	system("Pause");
	return 0;
}