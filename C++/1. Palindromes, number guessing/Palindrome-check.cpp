#include <iostream>


int main() {
	int inputNumber, reverseNumber = 0;

	
	std::cout << "Ievadiet veselu skaitli, lai parbauditu, vai tas ir palindroms: ";
	std::cin >> inputNumber;
	while (std::cin.fail() || std::cin.peek() != '\n') {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Nepareiza ievade! Ievadiet veselu skaitli: ";
		std::cin >> inputNumber;
	}


	for (int i = inputNumber; i > 0; i /= 10) {
		reverseNumber = (reverseNumber * 10) + (i % 10);
	}
		
	if(inputNumber == reverseNumber) {
       	std::cout << inputNumber << " ir palindroms!\n\n";
	}

   	else {
       	std::cout << inputNumber << " nav palindroms!\n\n";
	}
	

	system("Pause");
	return 0;
}