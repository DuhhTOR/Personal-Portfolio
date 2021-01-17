#ifndef TEXTBOX_H
#define TEXTBOX_H


#include "text.h"
#include "box.h"


class TextBox : public Text, public Box {
	public:
		TextBox(std::string = "", std::string = "", std::string = "", int = 0, int = 0, int = 0, std::string = "");
		void printTextBox() const;
};


#endif