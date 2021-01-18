#include <iostream>
#include "human.h"
#include "queue.h"


int main() {
	Queue<Human> humanQueue(3);
	Human firstHuman("Janis", 1.86, 76);
	Human secondHuman("Peteris", 1.76, 69);
	Human thirdHuman("Arturs", 1.79, 75);
	Human fourthHuman("Aleksis", 1.81, 78);
	
	
	std::cout << "Elementu rinda\n";
	humanQueue.enqueue(firstHuman);
	humanQueue.enqueue(secondHuman);
	humanQueue.printQueue();
	std::cout << "\n//Pievienojam elementu rindai//\n";
	humanQueue.enqueue(thirdHuman);
	humanQueue.printQueue();
	std::cout << "\n//Meginam pievienot vel 1 elementu rindai//\n";
	humanQueue.enqueue(fourthHuman);
	humanQueue.printQueue();
	std::cout << "\n//Iznemam 3 elementus no rindas//\n";
	humanQueue.dequeue();
	humanQueue.dequeue();
	humanQueue.dequeue();
	humanQueue.printQueue();
	std::cout << "\n//Meginam iznemt vel 1 elementu no rindas//\n";
	humanQueue.dequeue();
	std::cout << "\n//Pievienojam elementu rindai//\n";
	humanQueue.enqueue(fourthHuman);
	humanQueue.printQueue();
	std::cout << "\n\n";

	system("pause");
	return 0;
}