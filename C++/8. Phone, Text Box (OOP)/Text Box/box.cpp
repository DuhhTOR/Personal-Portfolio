#include <iostream>
#include <string>
#include "box.h"


Box::Box(int boxWidth, int boxHeight, std::string borderColor) {
	this->setBox(boxWidth, boxHeight, borderColor);
}


void Box::setBox(int boxWidth, int boxHeight, std::string borderColor) {
	this->boxWidth = boxWidth;
	this->boxHeight = boxHeight;
	this->borderColor = borderColor;
}


int Box::getBoxWidth() const {
	return this->boxWidth;
}


int Box::getBoxHeight() const {
	return this->boxHeight;
}


std::string Box::getBorderColor() const {
	return this->borderColor;
}


void Box::printBox() const{
	std::cout << "Platums = " << this->getBoxWidth() << "px, Augstums = " << this->getBoxHeight() << "px, Apmales krasa = " << this->getBorderColor() << "\n";
}