#include <string>


class Computer {
	public:
		Computer(std::string = "", std::string = "", float = 0);
		void setComputer(std::string, std::string, float);
		void printComputer() const;
		std::string getComputerCPU() const;
		std::string getComputerGPU() const;
		float getComputerPrice() const;
		
		
	private:
		std::string computerCPU;
		std::string computerGPU;
		float computerPrice;
};
