#include <iostream>
#include <cmath>
#include "triangle.h"


Triangle::Triangle(float a, float b, float c) {
	this->setTriangle(a, b, c);
}


void Triangle::setTriangle(float a, float b, float c) {
	if (this->checkIfTriangle(a, b, c)) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
}


bool Triangle::checkIfTriangle(float a, float b, float c) const {
	if (a + b <= c || a + c <= b || b + c <= a) {
		return false;
	}

	else {
		return true;
	}
}


bool Triangle::checkIfRightAngledTriangle() const {
	if (pow(this->a, 2) + pow(this->b, 2) == pow(this->c, 2)) {
		return true;
	}

	else {
		return false;
	}
}


float Triangle::perimiter() const {
	return (this->a + this->b + this->c);
}


float Triangle::area() const {
	float perimiter = this->perimiter() / 2;
	return sqrt(perimiter * (perimiter - this->a) * (perimiter - this->b) * (perimiter - this->c));
}