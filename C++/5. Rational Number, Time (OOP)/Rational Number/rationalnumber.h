#pragma once


class RationalNumber {
	friend std::ostream & operator<<(std::ostream &, const RationalNumber &);
	friend std::istream & operator>>(std::istream &, RationalNumber &);
	
	public:
		RationalNumber(int = 1, int = 1);
		void reduceFraction();
		const int findGreatestCommonDivisor(int, int) const;
		const RationalNumber operator+(RationalNumber &);
		const RationalNumber operator-(RationalNumber &);
		const RationalNumber operator*(const RationalNumber &) const;
		const RationalNumber operator/(const RationalNumber &) const;
		RationalNumber & operator=(const RationalNumber &);
		bool operator==(const RationalNumber &) const;
		bool operator!=(const RationalNumber &) const;
		bool operator>(const RationalNumber &) const;
		bool operator<(const RationalNumber &) const;
		bool operator>=(const RationalNumber &) const;
		bool operator<=(const RationalNumber &) const;
		
	private:
		int numerator, denominator;
};