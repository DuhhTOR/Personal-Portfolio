#include <iostream>
#include <string>
#include "text.h"


Text::Text(std::string font, std::string fontColor, std::string textLine, int fontSize) {
	this->font = font;
	this->fontColor = fontColor;
	this->textLine = textLine;
	this->fontSize = fontSize;
}


const void Text::printText() const {
	std::cout << "Fonts = " << this->font << ", Fonta lielums = " << this->fontSize << "px, Krasa = " << this->fontColor << ", Teksts = " << this->textLine << "\n";
}