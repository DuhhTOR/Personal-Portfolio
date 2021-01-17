#include <iostream>
#include "time.h"


Time::Time(int hour, int minute, int second){
	this->setTime(hour, minute, second);
}


void Time::setTime(int hour, int minute, int second) {
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}


std::ostream & operator<<(std::ostream &out, const Time &obj){
	out << (obj.hour < 10 ? "0" : "") << obj.hour << ":"
		<< (obj.minute < 10 ? "0" : "") << obj.minute << ":"
		<< (obj.second < 10 ? "0" : "") << obj.second;
	
	return out;
}


std::istream & operator>>(std::istream &in, Time &obj){
	std::cout << "h: "; in >> obj.hour;
	std::cout << "m: "; in >> obj.minute;
	std::cout << "s: "; in >> obj.second;
	
	return in;
}


Time& Time::operator=(const Time &right){
	hour = right.hour;
	minute = right.minute;
	second = right.second;
	
	return *this;
}


// ++x Laika palielinasana par 1 sekundi
Time Time::operator++(){
	if(second == 59){
		second = 0;
		
		if(minute == 59){
			minute = 0;
			
			if(hour == 23){
				hour = minute = second = 0;}
			
			else{
				hour++;};}
		
		else{
			minute++;}
	;}
	
	else{
		second++;}
}


// x++ Laika palielinasana par 1 minuti
Time Time::operator++(int){
	if(minute == 59){
		minute = 0;
		
		if(hour == 23){
			hour = minute = 0;}
		
		else{
			hour++;};}
	
	else{
		minute++;}
}


// --x Laika samazinasana par 1 sekundi
Time Time::operator--(){
	if(second == 0){
		second = 59;
		
		if(minute == 0){
			minute = 59;
			
			if(hour == 0){
				hour = 23;}
			
			else{
				hour--;};}
		
		else{
			minute--;}
	;}
	
	else{
		second--;}
}


// x-- Laika samazinasana par 1 minuti
Time Time::operator--(int){
	if(minute == 0){
		minute = 59;
		
		if(hour == 0){
			hour = 23;}
		
		else{
			hour--;}
	;}
	
	else{
		minute--;}
}


bool Time::operator>(const Time &right) const{
	if(hour > right.hour){
		return true;}
	
	else if(minute > right.minute){
		return true;}
		
	else if(second > right.second){
		return true;}
		
	else{
		return false;}
}


bool Time::operator<(const Time &right) const{
	if(hour < right.hour){
		return true;}
	
	else if(minute < right.minute){
		return true;}
		
	else if(second < right.second){
		return true;}
		
	else{
		return false;}
}


bool Time::operator>=(const Time &right) const{
	if(*this == right){
		return true;}
	
	else if(*this > right){
		return true;}
	
	else{
		return false;}
}


bool Time::operator<=(const Time &right) const{
	if(*this == right){
		return true;}
	
	else if(*this < right){
		return true;}
	
	else{
		return false;}
}


bool Time::operator==(const Time &right) const{
	if(hour == right.hour && minute == right.minute && second == right.second){
		return true;}
	
	else{
		return false;}
}


bool Time::operator!=(const Time &right) const{
	if(*this == right){
		return false;}
		
	else{
		return true;}
}