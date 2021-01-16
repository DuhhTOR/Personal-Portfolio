#include <iostream>
#include <cstdlib>
#include <ctime>


int main () {
	time_t t;
	srand((unsigned) time(&t));
	const int rangeLow = 0, rangeHigh = 100, tries = 10;
	const int randomNumber = (rand() % (rangeHigh + 1)) + rangeLow;
	int timesTried = 0, inputNumber;
	

	std::cout << "Programma ir generejusi veselu skaitli robeza no " << rangeLow << " - " << rangeHigh << ".\n";
	std::cout << "Jums jauzmin programmas skaitlis " << tries << " meginajumos!\n\n";
	

	do {
		std::cout << "Atlikuso meginajumu skaits: " << tries - timesTried << "\n";
		std::cout << "Minat skaitli: ";
		std::cin >> inputNumber;
		while ((inputNumber > rangeHigh || inputNumber < rangeLow) || std::cin.fail() || std::cin.peek() != '\n') {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Nepareiza ievade! Ievadiet veselu skaitli robeza no " << rangeLow << " - " << rangeHigh << ": ";
			std::cin >> inputNumber;
		}
		timesTried++;
		
		if (inputNumber == randomNumber) {
			std::cout << "\nSkaitlis uzminets ar " << timesTried << ". meginajumu!\nJus uzvarejat!\n\n";
			break;
		}

		else if (randomNumber > inputNumber) {
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