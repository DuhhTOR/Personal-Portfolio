#pragma once


#include<string>


class Human {
	public:
		Human(std::string = "", float = 0.0, int = 0);
		const void printHuman() const;
		
	private:
		std::string name;
		float height;
		int weight;
};