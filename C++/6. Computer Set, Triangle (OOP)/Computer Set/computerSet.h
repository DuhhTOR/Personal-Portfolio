#ifndef COMPUTERSET_H
#define COMPUTERSET_H


#include <string>


class ComputerSet {
	public:
		ComputerSet(std::string = "", std::string = "", std::string = "", float = 0, std::string = "", std::string = "", float = 0);
		void setComputerSet(std::string);
		std::string getComputerSetName() const;
		float getComputerSetPrice() const;
		void printComputerSet() const;
		
		
	private:
		std::string computerSetName;
		Computer computer;
		Monitor monitor;
};


#endif