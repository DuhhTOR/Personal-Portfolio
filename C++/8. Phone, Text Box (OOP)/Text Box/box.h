#pragma once


#include <string>


class Box {
	public:
		Box(int = 0, int = 0, std::string = "");
		const void printBox() const;
		
	protected:
		int boxWidth, boxHeight;
		std::string borderColor;
};