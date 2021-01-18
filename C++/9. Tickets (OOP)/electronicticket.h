#pragma once


class ElectronicTicket {
	public:
		ElectronicTicket(int = 0);
		void setElectronicTicket(int);
		int getSerialNumber() const;
		virtual void print() const;
		virtual void use() = 0;
		virtual void add(int) = 0;
	
	protected:
		int serialNumber;
};