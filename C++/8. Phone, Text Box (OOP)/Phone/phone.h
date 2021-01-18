#pragma once


class Phone {
	public:
		Phone(int = 0);
		const int getWeight() const;
		const void printPhone() const;
		
	protected:
		int weight;
};