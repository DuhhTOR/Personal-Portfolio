#pragma once


class Time {
	friend std::ostream & operator<<(std::ostream &, const Time &);
	friend std::istream & operator>>(std::istream &, Time &);
	
	public:
		Time(int = 0, int = 0, int = 0);
		Time & operator=(const Time &);
		Time& operator++();					//	++x
		Time operator++(int);				//	x++
		Time& operator--();					//	--x
		Time operator--(int);				//	x--
		const bool operator>(const Time &) const;
		const bool operator<(const Time &) const;
		const bool operator>=(const Time &) const;
		const bool operator<=(const Time &) const;
		const bool operator==(const Time &) const;
		const bool operator!=(const Time &) const;
		
		
	private:
		int second, minute, hour;
};