#pragma once


#include <iostream>


template<class T>
class Queue {
	public:
		Queue(int = 1);
		~Queue();
		void enqueue(T);
		void dequeue();
		const void printQueue() const;
	
	private:
		T* queueArray;
		int arraySize, arrayIndex;
};




template<class T>
Queue<T>::Queue(int arraySize) {
	this->arraySize = arraySize;
	this->queueArray = new T[arraySize];
	this->arrayIndex = 0;
}


template<class T>
Queue<T>::~Queue() {
	delete[] this->queueArray;
}


template<class T>
void Queue<T>::enqueue(T object) {
	if (this->arrayIndex == this->arraySize) {
		std::cout << "Rinda ir pilna, nevar pievienot elementu!\n";
	}

	else {
		this->queueArray[this->arrayIndex] = object;
		this->arrayIndex++;
	}
}


template<class T>
void Queue<T>::dequeue() {
	if (this->arrayIndex == 0) {
		std::cout << "Rinda ir tuksa!\n";
	}

	else {
		for (int i = 0; i < this->arraySize - 1; i++) {
			this->queueArray[i] = this->queueArray[i + 1];
		}

		this->arrayIndex--;
	}
}


template<class T>
const void Queue<T>::printQueue() const {
	for (int i = 0; i < this->arrayIndex; i++) {
		std::cout << i + 1 << ". ";
		this->queueArray[i].printHuman();
	}
}