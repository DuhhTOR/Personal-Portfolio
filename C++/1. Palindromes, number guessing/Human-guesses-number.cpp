#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


int main() {
	time_t t;
	srand((unsigned) time(&t));
	const int rangeLow = 0, rangeHigh = 100, tries = 10;
	const int randomNumber = (rand() % (rangeHigh + 1)) + rangeLow;
	int timesTried = 0;
	std::string userInput;
	

	std::cout << "Programma ir generejusi veselu skaitli robeza no " << rangeLow << " - " << rangeHigh << ".\n";
	std::cout << "Jums jauzmin programmas skaitlis " << tries << " meginajumos!\n\n";
	

	do {
		std::cout << "Atlikuso meginajumu skaits: " << (tries - timesTried) << "\n";
		std::cout << "Minat skaitli: ";
		while ((std::cin >> userInput) && (userInput.find_first_not_of("1234567890") != std::string::npos) || (stoi(userInput) > rangeHigh)) {
			std::cout << "Nepareiza ievade! Meginiet velreiz (" << rangeLow << " - " << rangeHigh << "): ";
		}
		timesTried++;
		
		if (stoi(userInput) == randomNumber) {
			std::cout << "\nSkaitlis uzminets ar " << timesTried << ". meginajumu!\nJus uzvarejat!\n\n";
			break;
		}

		else if (stoi(userInput) < randomNumber) {
			std::cout << "\nSkaitlis ir lielaks par ievadito!\n";
		}

		else {
			std::cout << "\nSkaitlis ir mazaks par ievadito!\n";
		}
	} while (tries != timesTried);
	
	if (tries == timesTried) {
		std::cout << "Atlikuso meginajumu skaits: " << (tries - timesTried) << "\n";
		std::cout << "Jus zaudejat! Pareiza atbilde: " << randomNumber << "\n\n";
	}
	

	system("Pause");
	return 0;
}
