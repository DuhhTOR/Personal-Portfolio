#pragma once


#include <string>


class Box {
	public:
		Box(int = 0, int = 0, std::string = "");
		void setBox(int, int, std::string);
		int getBoxWidth() const;
		int getBoxHeight() const;
		std::string getBorderColor() const;
		void printBox() const;
		
	protected:
		int boxWidth, boxHeight;
		std::string borderColor;
};