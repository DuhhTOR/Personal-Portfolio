#include <iostream>
#include "RationalNumber.h"


int main(){
	RationalNumber m(1, 8);
	RationalNumber n(1, 4);
	RationalNumber o;
	

	std::cin >> o;
	system("cls");
	
	std::cout << "m = " << m << "\n";
	std::cout << "n = " << n << "\n";
	std::cout << "o = " << o << "\n\n";
	
	std::cout << "Saskaitisana" << "\n";
	o = n + m;
	std::cout  << n << " + " << m << " = " << o << "\n";
	
	std::cout << "Atnemsana" << "\n";
	o = n - m;
	std::cout  << n << " - " << m << " = " << o << "\n";
	
	std::cout << "Reizinasana" << "\n";
	o = n * m;
	std::cout  << n << " * " << m << " = " << o << "\n";
	
	std::cout << "Dalisana" << "\n";
	o = n / m;
	std::cout  << n << " / " << m << " = " << o << "\n\n";
	

	system("pause");
	system("cls");
	o = m;
	std::cout << "o = m\n\n";
	std::cout << "m = " << m << "\n";
	std::cout << "n = " << n << "\n";
	std::cout << "o = " << m << "\n\n";
	
	std::cout << "m == o?\t";
	if (m == o) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "m != o?\t";
	if (m != o) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "m >  n?\t";
	if (m > n) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "m <  n?\t";
	if (m < n) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "m >= o?\t";
	if (m >= o) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	std::cout << "m <= o?\t";
	if (m <= o) {
		std::cout << "True\n";
	}

	else {
		std::cout << "False\n";
	}
	
	
	system("Pause");
	return 0;
}