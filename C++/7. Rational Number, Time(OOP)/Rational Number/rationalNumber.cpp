#include <iostream>
#include "RationalNumber.h"


RationalNumber::RationalNumber(int x, int y){
	this->setRationalNumber(x, y);
}


void RationalNumber::setRationalNumber(int x, int y) {
	this->x = x;

	if (y == 0) {
		std::cout << "Saucejs nedrikst but '0'! Saucejs aizstats ar '1'\n";
		this->y = 1;
	}

	else {
		this->y = y;
	}

	this->lowest();
}


void RationalNumber::lowest(){
	int commonFactor = this->gcd(this->x, this->y);
	
	this->x = this->x / commonFactor;
	this->y = this->y / commonFactor;
}


int RationalNumber::gcd(int x, int y) {
	if (x == 0)
		return y;

	return gcd(y % x, x);
}


std::ostream & operator<<(std::ostream &out, const RationalNumber &obj){
	out << obj.x << "/" << obj.y;
	
	return out;
}


std::istream & operator>>(std::istream &in, RationalNumber &obj){
	int x, y;
	bool zero;
	
	do{
		std::cout << "Ievadiet skaititaju: "; in >> obj.x;
		std::cout << "Ievadiet sauceju: "; in >> obj.y;
		
		if(obj.y == 0){
			zero = true;
			std::cout << "Saucejs nedrikst but '0'!\n";
			system("pause");
			system("cls");}
		
		else{
			x = obj.x;
			y = obj.y;
			zero = false;}
	
	}
	while(zero == true);
	
	obj.lowest();
	
	return in;
}



const RationalNumber RationalNumber::operator+(RationalNumber &right){
	RationalNumber copy = *this;
	
	copy.y = gcd(y, right.y);
	copy.y = (y * right.y) / copy.y;
	copy.x = (x) * (copy.y / y) + (right.x) * (copy.y / right.y);
	
	copy.lowest();
	
	return copy;
}



const RationalNumber RationalNumber::operator-(RationalNumber &right){
	RationalNumber copy = *this;
	
	copy.y = gcd(y, right.y);
	copy.y = (y * right.y) / copy.y;
	copy.x = (x) * (copy.y / y) - (right.x) * (copy.y / right.y);
	
	copy.lowest();
	
	return copy;
}


const RationalNumber RationalNumber::operator*(const RationalNumber &right) const{
	RationalNumber copy = *this;
	
	copy.x *= right.x;
	copy.y *= right.y;
	
	copy.lowest();
	
	return copy;
}


const RationalNumber RationalNumber::operator/(const RationalNumber &right) const{
	RationalNumber copy = *this;
	
	copy.x *= right.y;
	copy.y *= right.x;
	
	copy.lowest();
	
	return copy;
}


RationalNumber & RationalNumber::operator=(const RationalNumber &right){
	x = right.x;
	y = right.y;
	
	return *this;
}


bool RationalNumber::operator==(const RationalNumber &right) const{
	if(x == right.x && y == right.y){
		return true;}
	
	else{
		return false;}
}


bool RationalNumber::operator!=(const RationalNumber &right) const{
	return !(*this == right);
}


bool RationalNumber::operator>(const RationalNumber &right) const{
	if((float)x / (float)y > (float)right.x / (float)right.y){
		return true;}
		
	else{
		return false;}
}


bool RationalNumber::operator<(const RationalNumber &right) const{
	if((float)x / (float)y < (float)right.x / (float)right.y){
		return true;}
		
	else{
		return false;}
}


bool RationalNumber::operator>=(const RationalNumber &right) const{
	if(*this == right){
		return true;}
	
	else if(*this > right){
		return true;}
	
	else{
		return false;}
}


bool RationalNumber::operator<=(const RationalNumber &right) const{
	if(*this == right){
		return true;}
	
	else if(*this < right){
		return true;}
	
	else{
		return false;}
}