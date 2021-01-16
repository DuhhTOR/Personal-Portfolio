#include <iostream>
#include <cstdlib>
#include <ctime>


int main () {
	time_t t;
	srand((unsigned) time(&t));
	const int rangeLow = 0, rangeHigh = 100, tries = 10;
	const int randomNumber = (rand() % (rangeHigh + 1)) + rangeLow;
	int timesTried = 0, userInputNumber;
	

	std::cout << "Programma ir generejusi veselu skaitli robeza no " << rangeLow << " - " << rangeHigh << ".\n";
	std::cout << "Jums jauzmin programmas skaitlis " << tries << " meginajumos!\n\n";
	

	do {
		std::cout << "Atlikuso meginajumu skaits: " << tries - timesTried << "\n";
		std::cout << "Minat skaitli: ";
		std::cin >> userInputNumber;
		while ((userInputNumber > rangeHigh || userInputNumber < rangeLow) || std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(100, '\n');
			std::cout << "Nepareiza ievade! Ievadiet veselu skaitli robeza no " << rangeLow << " - " << rangeHigh << ": ";
			std::cin >> userInputNumber;
		}
		timesTried++;
		
		if (userInputNumber == randomNumber) {
			std::cout << "\nSkaitlis uzminets ar " << timesTried << ". meginajumu!\nJus uzvarejat!\n\n";
			break;
		}

		else if (randomNumber > userInputNumber) {
			std::cout << "\nSkaitlis ir lielaks par ievadito!\n";
		}

		else {
			std::cout << "\nSkaitlis ir mazaks par ievadito!\n";
		}
	} while (tries != timesTried);
	
	if (tries == timesTried) {
		std::cout << "Atlikuso meginajumu skaits: " << tries - timesTried << "\n";
		std::cout << "Jus zaudejat! Pareiza atbilde: " << randomNumber << "\n\n";
	}
	

	system("Pause");
	return 0;
}