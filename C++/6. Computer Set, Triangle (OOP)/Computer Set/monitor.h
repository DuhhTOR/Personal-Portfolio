#ifndef MONITOR_H
#define MONITOR_H


#include <string>


class Monitor {
	public:
		Monitor(std::string = "", std::string = "", float = 0);
		void setMonitor(std::string, std::string, float);
		void printMonitor() const;
		std::string getMonitorManufacturer() const;
		std::string getMonitorResolution() const;
		float getMonitorPrice() const;
		
	private:
		std::string monitorManufacturer;
		std::string monitorResolution;
		float monitorPrice;
};


#endif