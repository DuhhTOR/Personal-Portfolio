#include <iostream>
#include "computer.h"
#include "monitor.h"
#include "computerSet.h"


int main () {
	ComputerSet gamingSet("Gaming", "i7 8700K", "RTX 2070 SUPER", 1539.99, "ASUS", "2560x1440", 274.79);
	

	gamingSet.printComputerSet();
	std::cout << "\n";
	

	system("Pause");
	return 0;
}