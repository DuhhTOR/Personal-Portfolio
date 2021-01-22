#pragma once


#include <string>


class Text {
	public:
		Text(std::string = "", std::string = "", std::string = "", int = 0);
		const void printText() const;
		
	protected:
		std::string font, fontColor, textLine;
		int fontSize;
};