#pragma once


class ElectronicTicket {
	public:
		ElectronicTicket(int = 0);
		virtual const void print() const;
		virtual void use() = 0;
		virtual void add(int) = 0;
	
	protected:
		int serialNumber;
};