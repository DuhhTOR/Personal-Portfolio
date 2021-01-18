#include <iostream>
#include <string>
#include "box.h"


Box::Box(int boxWidth, int boxHeight, std::string borderColor) {
	this->boxWidth = boxWidth;
	this->boxHeight = boxHeight;
	this->borderColor = borderColor;
}


const void Box::printBox() const {
	std::cout << "Platums = " << this->boxWidth << "px, Augstums = " << this->boxHeight << "px, Apmales krasa = " << this->borderColor << "\n";
}