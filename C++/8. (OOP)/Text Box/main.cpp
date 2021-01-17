#include "text.h"
#include "box.h"
#include "textbox.h"


int main() {
	Text text("Times New Roman", "Red", "Kaut kads teikums.", 12);
	Box box(15, 10, "Blue");
	TextBox textBox("Helvetica", "Green", "Kaut kads savadaks teikums.", 16, 25, 25, "Orange");
	
	
	std::cout << "Text\n";
	text.printText();
	std::cout << "\nBox\n";
	box.printBox();
	std::cout << "\nText Box\n";
	textBox.printTextBox();
	std::cout << "\n\n";
	
	std::cout << "Katra parametra izvade\n"
			  << "Fonts = " << textBox.getFont() << "\n"
			  << "Krasa = " << textBox.getFontColor() << "\n"
			  << "Teksts = " << textBox.getTextLine() << "\n"
			  << "Fonta lielums = " << textBox.getFontSize() << "px\n"
			  << "Platums = " << textBox.getBoxWidth() << "px\n"
			  << "Augstums = " << textBox.getBoxHeight() << "px\n"
			  << "Apmales krasa = " << textBox.getBorderColor() << "\n\n";
	
	
	system("Pause");
	return 0;
}