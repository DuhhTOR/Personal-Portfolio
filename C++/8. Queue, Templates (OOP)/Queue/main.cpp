#include <iostream>
#include "queue.h"


int main() {
	Queue<int> integerQueue(2);
	Queue<float> floatQueue(10);
	Queue<char> charQueue(15);
	
	
	std::cout << "*----INT datu tipa elementu rinda----*\n";
	
	integerQueue.enqueue(2);
	
	std::cout << "Elementu rinda\n";
	integerQueue.printQueue();
	std::cout << "\n//Pievienojam elementu rindai//\n";
	integerQueue.enqueue(7);
	integerQueue.printQueue();
	std::cout << "\n//Meginam pievienot vel 1 elementu rindai//\n";
	integerQueue.enqueue();
	integerQueue.printQueue();
	std::cout << "\n//Iznemam elementu no rindas//\n";
	integerQueue.dequeue();
	integerQueue.printQueue();
	std::cout << "\n//Pievienojam elementu rindai//\n";
	integerQueue.enqueue(89);
	integerQueue.printQueue();
	std::cout << "\n\n";
	system("pause");
	system("cls");
	
	
	std::cout << "*----FLOAT datu tipa elementu rinda----*\n";
	
	for (int i = 1; i < 9; i++) {
		floatQueue.enqueue(i * 0.67);
	}
	
	std::cout << "Elementu rinda\n";
	floatQueue.printQueue();
	std::cout << "\n//Pievienojam 2 elementus rindai//\n";
	floatQueue.enqueue(9.99);
	floatQueue.enqueue(6.9);
	floatQueue.printQueue();
	std::cout << "\n//Meginam pievienot vel 1 elementu rindai//\n";
	floatQueue.enqueue();
	floatQueue.printQueue();
	std::cout << "\n//Iznemam 3 elementus no rindas//\n";
	floatQueue.dequeue();
	floatQueue.dequeue();
	floatQueue.dequeue();
	floatQueue.printQueue();
	std::cout << "\n//Pievienojam elementu rindai\n";
	floatQueue.enqueue(189.33);
	floatQueue.printQueue();
	std::cout << "\n\n";
	system("pause");
	system("cls");
	
	
	std::cout << "*----CHAR datu tipa elementu rinda----*\n";
	
	for (int i = 97, j = 0; j < 15; i++, j++) {
		charQueue.enqueue(i);
	}
	
	charQueue.printQueue();
	std::cout << "\n//Meginam pievienot vel 1 elementu rindai//\n";
	charQueue.enqueue();
	charQueue.printQueue();
	std::cout << "\n//Iznemam 2 elementus no rindas//\n";
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.printQueue();
	std::cout << "\n//Pievienojam 2 lementus rindai//\n";
	charQueue.enqueue('$');
	charQueue.enqueue('&');
	charQueue.printQueue();
	std::cout << "\n\n";
	
	
	system("pause");
	return 0;
}