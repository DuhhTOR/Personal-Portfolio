#include <iostream>
#include <string>


int main() {
	std::string userInput;
	int reverseNumber = 0;

	
	std::cout << "Ievadiet veselu skaitli, lai parbauditu, vai tas ir palindroms: ";
	while ((std::cin >> userInput) && (userInput.find_first_not_of("1234567890") != std::string::npos)) {
		std::cout << "Nepareiza ievade! Meginiet velreiz: ";
	}


	for (int i = stoi(userInput); i > 0; i /= 10) {
		reverseNumber = (reverseNumber * 10) + (i % 10);
	}
		
	if(stoi(userInput) == reverseNumber) {
       	std::cout << userInput << " ir palindroms!\n\n";
	}

   	else {
       	std::cout << userInput << " nav palindroms!\n\n";
	}
	

	system("Pause");
	return 0;
}
