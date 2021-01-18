#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include "functions.h"


std::fstream data;
std::fstream datacopy;
std::fstream temp;


struct clientdata {
	int accountNumber;
	std::string Surname;
	std::string Name;
	float balance;
};


/* ------------------------------------------------------------- Pievienot ierakstu --------------------------------------------------------------- */
void addEntry(){
	bool fail = false, found = false, input = false;
	string line, number;
	clientdata client;
	
	
	// Ievade un ievades korektuma parbaude
	cout << "\nIevadiet datus.\n";
	cout << "---------------\n";
		
	// Konta numura ievade un parbaude, vai numurs nav saraksta
	do{
		cin.clear();
		cin.ignore();
		found = false;
		
		cout << "Konta numurs: "; cin >> client.accountNumber;
			
		number = to_string(client.accountNumber);
			
		data.open("dat_a.txt", ios::in);
				
		if(cin.fail()){
			data.close();
			cout << "Nepareiza ievade!\n";
			continue;}
		
		else{
			if(data.is_open()){
				while(getline(data, line)){
					if(line.find(number + ".") != string::npos){
						found = true;
						cout << "Konta numurs jau tiek izmantots datubaze!\n";
						break;}
				};}
				
			else{
				return;}
				
			data.close();
		}
		
		if(cin.fail() == false && found == false){
			break;}
	}
	while(true);
		
	// Varda, uzvarda un balansa ievade	
	cout << "Uzvards: "; cin >> client.Surname;
	cout << "Vards: "; cin >> client.Name;
		
	do{
		cin.clear();
		cin.ignore();
		
		cout << "Konta bilance: "; cin >> client.balance;
		
		if(cin.fail()){
			cout << "Nepareiza ievade!\n";}
	}
	while(cin.fail());
	
	
	data.close();
	data.open("dat_a.txt", ios::out | ios::app);
	
	
	// Rakstisana faila
	if(data.is_open()){
		data << client.accountNumber << ". " << client.Surname << " " << client.Name << " " << client.balance << endl;
		
		if(data.good()){
			fail = false;}
		
		else{
			fail = true;}
		
		data.close();
	}
	
	else{
		data.close();
		cout << "\nNeizdevas atvert datubazi!\n";
		system("Pause");
		return;}
	
	
	if(fail == true){
		cout << "\nRadas problemas rakstot datubazi!\n";
		system("Pause");
		return;}
	
	else{
		cout << "\nIeraksts pievienots!\n";}
	
	
	system("Pause");
}


/* --------------------------------------------------------------- Dzest ierakstu ----------------------------------------------------------------- */
void removeEntry(){
	bool fail = false, found = false;
	string line, number;
	
	
	do{
		cout << "\nIevadiet konta numuru: "; cin >> number;
		
		number += ".";
		
		data.open("dat_a.txt", ios::in);
		temp.open("temp.txt", ios::out);
		
		if(data.is_open() && temp.is_open()){
			while(getline(data, line)){
				if(data.good()){
					if(found == false){
						if(line.find(number) != string::npos){
							found = true;
							continue;};};}
				
				else{
					fail = true;
					break;}
					
				temp << line << endl;
				
				if(temp.good()){
					continue;}
				
				else{
					fail = true;
					break;}
			}
			data.close();
			temp.close();
			remove("dat_a.txt");
			rename("temp.txt", "dat_a.txt");
		}
		
		else{
			data.close();
			temp.close();
			cout << "\nNeizdevas atvert datubazi!\n";
			system("Pause");
			return;}
		
		if(fail == true){
			cout << "Radas problemas lasto/rakstot datubazi!\n";
			system("Pause");
			return;}
		
		if(found == false){
			cout << "Neeksiste tads konta numurs!\n";}
		
		else{
			cout << "Ieraksts izdzests!\n";}
	}
	while(found == false);
	
	
	system("Pause");
}


/* ------------------------------------------------------------ Izvadit visus ierakstus ----------------------------------------------------------- */
void printAll() {
	bool fail = false;
	std::string textLine;
	
	
	system("cls");
	
	
	data.open("dat_a.txt", std::ios::in);
	
	
	if (data.is_open()) {
		while (getline(data, textLine)) {
			if (data.good()) {
				std::cout << textLine << "\n";
				continue;
			}
			
			else {
				fail = true;
				break;
			}
		}
		data.close();
	}
	
	else {
		data.close();
		std::cout << "\nNeizdevas atvert datubazi!\n";
		system("Pause");
		return;
	}
	
	
	if (fail == true) {
		std::cout << "\nRadas problemas lasto datubazi!\n";
		system("Pause");
		return;
	}
	
	
	system("Pause");
}


/* ---------------------------------------------------------------- Atrast ierakstu --------------------------------------------------------------- */
void findEntry(){
	bool fail = false, found = false;
	std::string line, number;
	
	do {
		cout << "\nIevadiet konta numuru: "; cin >> number;
		
		number += ".";
		
		data.open("dat_a.txt", ios::in);
		
		if(data.is_open()){
			while(getline(data, line)){
				if(data.good()){
					if(line.find(number) != string::npos){
						cout << line << endl;
						found = true;
						break;};}
				
				else{
					fail = true;
					break;}
			}
			data.close();
		}
		
		else{
			data.close();
			cout << "\nNeizdevas atvert datubazi!\n";
			system("Pause");
			return;}
		
		
		if(fail == true){
			cout << "Radas problemas lasto datubazi!\n";
			system("Pause");
			return;}
		
		else if(found == false){
			cout << "Neeksiste tads konta numurs!\n";}
	}
	while(found == false);
	
	system("Pause");
}


/* -------------------------------------------------------- Izmainit konta balansu ---------------------------------------------------------------- */
void changeBalance() {
	bool fail = false, found = false;
	float change, balance;
	int index;
	string line, found_line, new_line, number, number_in_file;
	
	// Atrod ievadito konta numuru
	do{
		cout << "\nIevadiet konta numuru: "; cin >> number;
		
		number += ".";
		
		data.open("dat_a.txt", ios::in);
		temp.open("temp.txt", ios::out);
		
		if(data.is_open()){
			while(getline(data, line)){
				if(data.good()){
					if(found == false){
						if(line.find(number) != string::npos){
							found = true;
							found_line = line;
							index = line.find_last_of(" ");
							continue;};};}
				
				else{
					fail = true;
					data.close();
					break;}
				
				temp << line << endl;
				
				if(temp.good()){
					continue;}
				
				else{
					fail = true;
					break;}
			}
			data.close();
			temp.close();
			remove("dat_a.txt");
			rename("temp.txt", "dat_a.txt");
		}
		
		else{
			data.close();
			temp.close();
			cout << "\nNeizdevas atvert datubazi!\n";
			system("Pause");
			return;}
		
		
		if(fail == true){
			cout << "Radas problemas lasot datubazi!\n";
			system("Pause");
			return;}
		
		else if(found == false){
			cout << "Neeksiste tads konta numurs!\n";}
	}
	while(found == false);
	
	
	// Ievade, par cik jaizmaina konta balanss
	do{
		cin.clear();
		cin.ignore();
		
		cout << "Ievaidiet summu, ko velaties pieskaitit/atnemt: "; cin >> change;
		
		if(cin.fail()){
			cout << "Nepareiza ievade!\n\n";}
	}
	while(cin.fail());
	
	
	for(int i = index + 1; i < found_line.length(); i++){
		number_in_file += found_line[i];
	}
	
	
	balance = stof(number_in_file) + (change);
	number_in_file = to_string(balance);
	
	new_line = found_line.erase(index + 1, found_line.length());
	new_line += number_in_file;
	
	
	data.open("dat_a.txt", ios::out | ios::app);
	
	
	if(data.is_open()){
		data << new_line << endl;
		
		if(data.good()){
			fail = false;}
		
		else{
			fail = true;};
		
		data.close();}
		
	else{
		data.close();
		cout << "\nNeizdevas atvert datubazi!\n";
		system("Pause");
		return;}
	
	
	if(fail == true){
		cout << "Radas problemas lasot datubazi!\n";
		system("Pause");
		return;}
	
	else{
		cout << "Balanss nomainits.\n";}
	
	system("Pause");
}


/* ---------------------------------------------------------- Izvadit paradniekus ----------------------------------------------------------------- */
void printDeptors() {
	bool fail = false, found = false;
	string line;
	
	
	system("cls");
	
	
	data.open("dat_a.txt", ios::in);
	
	
	if(data.is_open()){
		while(getline(data, line)){
			if(data.good()){
				if(line.find("-") != string::npos){
					found = true;
					cout << line << endl;};}
			
			else{
				fail = true;
				break;}
		}
		data.close();
	}
	
	else{
		data.close();
		cout << "Neizdevas atvert datubazi!\n";
		system("Pause");
		return;}
	
	
	if(fail == true){
		cout << "Radas problemas lasto datubazi!\n";
		system("Pause");
		return;}
	
	else if(found == false){
		cout << "Datu baze nav ieraksti ar negativu balansu.\n";}
	
	
	system("Pause");
}


/* -------------------------------------------------------- Izvadit esoso ierakstu skaitu --------------------------------------------------------- */
void countEntries() {
	bool fail = false;
	int entries = 0;
	std::string line;
	
	
	data.open("data.txt", std::ios::in);
	
	
	if (data.is_open()) {
		while (getline(data, line)) {
			if (data.good()) {
				entries++;
			}
			
			else {
				fail = true;
				break;
			}
		}
		data.close();
	}
	
	else {
		data.close();
		std::cout << "\nNeizdevas atvert datubazi!\n";
		system("Pause");
		return;
	}
	
	
	if (fail == true) {
		std::cout << "/nRadas problemas lasto datubazi!\n";
		system("Pause");
		return;
	}
	
	else {
		std::cout << "\nDatu baze ir " << entries << " ieraksti.\n";
	}
	
	
	system("Pause");
}


/* ------------------------------------------------------ Izveidot datu bazes kopiju -------------------------------------------------------------- */
void makeCopy() {
	bool fail = false;
	std::string textLine;
	
	
	data.open("data.txt", std::ios::in);
	datacopy.open("datacopy.txt", std::ios::out);
	
	
	if (data.is_open() && datacopy.is_open()) {
		while (getline(data, textLine)) {
			if (data.good()) {
		    	datacopy << textLine << "\n";
			}
		    
		    else {
				fail = true;
				break;
			}
		    
		    if (datacopy.good()) {
				continue;
			}
			
			else {
				fail = true;
				break;
			}
		}
		data.close();
		datacopy.close();
	}
	
	else {
		data.close();
		datacopy.close();
		std::cout << "\nNeizdevas atvert datubazi!\n";
		system("Pause");
		return;}
	
	
	if (fail == true) {
		std::cout << "/nRadas problemas lasot/rakstot datubazi!\n";
		system("Pause");
		return;
	}
	
	else {
		std::cout << "\nDatu bazes kopija izveidota.\n";
	}
	
	
	system("Pause");
}