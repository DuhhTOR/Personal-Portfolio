#include <string>
#include "textbox.h"


TextBox::TextBox(std::string font, std::string fontColor, std::string textLine, int fontSize, int boxWidth, int boxHeight, std::string borderColor) : Text(font, fontColor, textLine, fontSize), Box(boxWidth, boxHeight, borderColor) {
}


const void TextBox::printTextBox() const {
	Text::printText();
	Box::printBox();
}