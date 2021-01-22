#include <iostream>
#include <string>
#include "time.h"


std::ostream& operator<<(std::ostream &output, const Time &object) {
	if (object.hour < 10) {
		output << "0" << object.hour << ":";
	}

	else {
		output << object.hour << ":";
	}

	if (object.minute < 10) {
		output << "0" << object.minute << ":";
	}

	else {
		output << object.minute << ":";
	}

	if (object.second < 10) {
		output << "0" << object.second;
	}

	else {
		output << object.second;
	}

	return output;
}


std::istream& operator>>(std::istream &input, Time &object) {
	std::string userInput;


	std::cout << "Stundas: ";
	do {
		while ((input >> userInput) && (userInput.find_first_not_of("1234567890") != std::string::npos)) {
			std::cout << "Nepareiza ievade! Meginiet velreiz: ";
		}

		if (stoi(userInput) > 23) {
			std::cout << "Nepareiza ievade! Meginiet velreiz (0h - 23h): ";
		}
	} while (stoi(userInput) > 23);
	object.hour = stoi(userInput);

	std::cout << "Minutes: ";
	do {
		while ((input >> userInput) && (userInput.find_first_not_of("1234567890") != std::string::npos)) {
			std::cout << "Nepareiza ievade! Meginiet velreiz: ";
		}
		
		if (stoi(userInput) > 59) {
			std::cout << "Nepareiza ievade! Meginiet velreiz (0min - 59min): ";
		}
	} while (stoi(userInput) > 59);
	object.minute = stoi(userInput);

	std::cout << "Sekundes: ";
	do {
		while ((input >> userInput) && (userInput.find_first_not_of("1234567890") != std::string::npos)) {
			std::cout << "Nepareiza ievade! Meginiet velreiz: ";
		}
		
		if (stoi(userInput) > 59) {
			std::cout << "Nepareiza ievade! Meginiet velreiz (0s - 59s): ";
		}
	} while (stoi(userInput) > 59);
	object.second = stoi(userInput);

	return input;
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
Time& Time::operator++() {
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

	return *this;
}


// x++ Laika palielinasana par 1 minuti
Time Time::operator++(int) {
	Time objectCopy = *this;


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

	return objectCopy;
}


// --x Laika samazinasana par 1 sekundi
Time& Time::operator--() {
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

	return *this;
}


// x-- Laika samazinasana par 1 minuti
Time Time::operator--(int) {
	Time objectCopy = *this;


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

	return objectCopy;
}


const bool Time::operator>(const Time &secondObject) const {
	if ((this->hour * 3600) + (this->minute * 60) + this->second > (secondObject.hour * 3600) + (secondObject.minute * 60) + secondObject.second) {
		return true;
	}

	else {
		return false;
	}
}


const bool Time::operator<(const Time &secondObject) const {
	if ((this->hour * 3600) + (this->minute * 60) + this->second < (secondObject.hour * 3600) + (secondObject.minute * 60) + secondObject.second) {
		return true;
	}

	else {
		return false;
	}
}


const bool Time::operator>=(const Time &secondObject) const {
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


const bool Time::operator<=(const Time &secondObject) const {
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


const bool Time::operator==(const Time &secondObject) const {
	if ((this->hour == secondObject.hour) && (this->minute == secondObject.minute) && (this->second == secondObject.second)) {
		return true;
	}
	
	else {
		return false;
	}
}


const bool Time::operator!=(const Time &secondObject) const {
	if (!(*this == secondObject)) {
		return true;
	}
		
	else {
		return false;
	}
}