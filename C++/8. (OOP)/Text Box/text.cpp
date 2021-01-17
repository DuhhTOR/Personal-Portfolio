#include "text.h"


Text::Text(std::string font, std::string fontColor, std::string textLine, int fontSize) {
	this->setText(font, fontColor, textLine, fontSize);
}


void Text::setText(std::string font, std::string fontColor, std::string textLine, int fontSize) {
	this->font = font;
	this->fontColor = fontColor;
	this->textLine = textLine;
	this->fontSize = fontSize;
}


std::string Text::getFont() const {
	return this->font;
}


std::string Text::getFontColor() const {
	return this->fontColor;
}


std::string Text::getTextLine() const {
	return this->textLine;
}


int Text::getFontSize() const {
	return this->fontSize;
}


void Text::printText() const {
	std::cout << "Fonts = " << this->getFont() << ", Fonta lielums = " << this->getFontSize() << "px, Krasa = " << this->getFontColor() << ", Teksts = " << this->getTextLine() << "\n";
}