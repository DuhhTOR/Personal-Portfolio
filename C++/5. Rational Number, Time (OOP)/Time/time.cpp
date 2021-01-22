#include <iostream>
#include <string>
#include "time.h"


std::ostream& operator<<(std::ostream& out, const Time& obj) {
	out << (obj.hour < 10 ? "0" : "") << obj.hour << ":"
		<< (obj.minute < 10 ? "0" : "") << obj.minute << ":"
		<< (obj.second < 10 ? "0" : "") << obj.second;

	return out;
}


std::istream& operator>>(std::istream& in, Time& obj) {
	std::cout << "h: ";
	in >> obj.hour;

	std::cout << "m: ";
	in >> obj.minute;

	std::cout << "s: ";
	in >> obj.second;

	return in;
}


Time::Time(int hour, int minute, int second) {
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}


Time& Time::operator=(const Time &secondObject) {
	this->hour = secondObject.hour;
	this->minute = secondObject.minute;
	this->second = secondObject.second;
	
	return *this;
}


// ++x Laika palielinasana par 1 sekundi
Time Time::operator++() {
	if (this->second == 59) {
		this->second = 0;
		
		if (this->minute == 59) {
			this->minute = 0;
			
			if (this->hour == 23) {
				this->hour = 0;
			}
			
			else {
				hour++;}
		}
		
		else {
			minute++;
		}
	}
	
	else {
		second++;}
}


// x++ Laika palielinasana par 1 minuti
Time Time::operator++(int) {
	if (this->minute == 59) {
		this->minute = 0;
		
		if (this->hour == 23) {
			this->hour = 0;
		}
		
		else {
			this->hour++;
		}
	}
	
	else {
		this->minute++;
	}
}


// --x Laika samazinasana par 1 sekundi
Time Time::operator--() {
	if (this->second == 0) {
		this->second = 59;
		
		if (this->minute == 0){
			this->minute = 59;
			
			if (this->hour == 0){
				this->hour = 23;
			}
			
			else {
				this->hour--;
			}
		}
		
		else {
			this->minute--;
		}
	}
	
	else {
		this->second--;
	}
}


// x-- Laika samazinasana par 1 minuti
Time Time::operator--(int) {
	if (this->minute == 0) {
		this->minute = 59;
		
		if (this->hour == 0) {
			this->hour = 23;
		}
		
		else {
			this->hour--;
		}
	}
	
	else {
		this->minute--;
	}
}


bool Time::operator>(const Time &secondObject) const {
	if (this->hour > secondObject.hour) {
		return true;
	}
	
	else if (this->minute > secondObject.minute) {
		return true;
	}
		
	else if (this->second > secondObject.second) {
		return true;
	}
		
	else {
		return false;
	}
}


bool Time::operator<(const Time &secondObject) const {
	if (this->hour < secondObject.hour) {
		return true;
	}
	
	else if (this->minute < secondObject.minute) {
		return true;
	}
		
	else if (this->second < secondObject.second) {
		return true;
	}
		
	else {
		return false;
	}
}


bool Time::operator>=(const Time &secondObject) const {
	if (*this == secondObject) {
		return true;
	}
	
	else if (*this > secondObject) {
		return true;
	}
	
	else {
		return false;
	}
}


bool Time::operator<=(const Time &secondObject) const {
	if (*this == secondObject) {
		return true;
	}
	
	else if (*this < secondObject) {
		return true;
	}
	
	else {
		return false;
	}
}


bool Time::operator==(const Time &secondObject) const {
	if ((this->hour == secondObject.hour) && (this->minute == secondObject.minute) && (this->second == secondObject.second)) {
		return true;
	}
	
	else {
		return false;
	}
}


bool Time::operator!=(const Time &secondObject) const {
	if (!(*this == secondObject)) {
		return true;
	}
		
	else {
		return false;
	}
}