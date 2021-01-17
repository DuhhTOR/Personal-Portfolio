#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle {
	public:
		Triangle(float = 0, float = 0, float = 0);
		void setTriangle(float, float, float);
		bool checkIfTriangle(float, float, float) const;
		bool checkIfRightAngledTriangle() const;
		float perimiter() const;
		float area() const;
		
	private:
		float a, b, c;
};


#endif