#include<iostream>
#include<string>
#include "human.h"


Human::Human(std::string name, float height, int weight) {
	this->name = name;
	this->height = height;
	this->weight = weight;
}


const void Human::printHuman() const {
	std::cout << "Vards = " << this->name << ", Garums = " << this->height << "m, Svars = " << this->weight << "kg.\n";
}