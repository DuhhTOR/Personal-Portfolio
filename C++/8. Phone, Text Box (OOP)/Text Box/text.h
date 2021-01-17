#pragma once


#include <string>


class Text {
	public:
		Text(std::string = "", std::string = "", std::string = "", int = 0);
		void setText(std::string, std::string, std::string, int);
		std::string getFont() const;
		std::string getFontColor() const;
		std::string getTextLine() const;
		int getFontSize() const;
		void printText() const;
		
	protected:
		std::string font, fontColor, textLine;
		int fontSize;
};