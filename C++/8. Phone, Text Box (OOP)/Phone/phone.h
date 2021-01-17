#pragma once


class Phone {
	public:
		Phone(int = 0);
		void setPhone(int);
		int getWeight() const;
		void printPhone() const;
		
	protected:
		int weight;
};