//Modify the code given in ILO B and add the following functions:
//a. A function to compute for the area of a triangle
//b. A function to compute for the perimeter of a triangle
//c. A function that determines whether the triangle is acute-angled, obtuse-angled or 'others.'

//import  algorithm module to use max() function
#include <iostream>
#include <algorithm>

//declare all three functions
double AreaOfATriangle (double BaseA, double TriangleHeight);
double PerimeterOfATriangle (double SideA, double BaseA, double SideB);
double DetermineTriangle (double A, double B, double C, double MaxAngle);

class Triangle {
	private:
		double totalAngle, angleA, angleB, angleC;
	public:
		Triangle(double A, double B, double C);
		void setAngles(double A, double B, double C);
		const bool validateTriangle();
};

int main(){
	//declare paramters
	double BaseA;
	double TriangleHeight;
	double SideA;
	double SideB;
	double A = 40;
	double B = 30;
	double C = 110;
	double MaxAngle;
	//driver code
	Triangle set1(40, 30, 110);
	if(set1.validateTriangle()){
		std::cout <<"The shape is a valid triangle. \n";
	} 
	else {
		std::cout <<"The shape is NOT a valid triangle. \n";
	}
	//ask user for input for base, height, and both sides
	std::cout <<"Please enter the length of the base of the Triangle: ";
	std::cin >> BaseA;
	std::cout <<"Please enter the length of the height of the Triangle: ";
	std::cin >> TriangleHeight;
	std::cout <<"Please enter the length of the side A of the Triangle: ";
	std::cin >> SideA;
	std::cout <<"Please enter the length of the side B of the Triangle: ";
	std::cin >> SideB;
	std::cout <<"The area of the triangle is: " <<AreaOfATriangle (BaseA, TriangleHeight) <<std::endl;
	std::cout <<"The perimeter of the triangle is: " <<PerimeterOfATriangle (SideA, BaseA, SideB) <<std::endl;
	//if-else statmeent to determine the type of triangle
	DetermineTriangle (A, B, C, MaxAngle);
	if (DetermineTriangle (A, B, C, MaxAngle) < 90) {
		std::cout <<"This triangle is acute-angled";
	}
	else if (DetermineTriangle (A, B, C, MaxAngle) == 90) {
		std::cout <<"This triangle is right-angled";
	}
	else if (90 < DetermineTriangle (A, B, C, MaxAngle) < 180) {
		std::cout <<"This triangle is obtuse-angled";
	}
	else {
		std::cout <<"This is not a triangle";
	}
	return 0;
}

Triangle::Triangle(double A, double B, double C) {
	angleA = A;
	angleB = B;
	angleC = C;
	totalAngle = A+B+C;
}

void Triangle::setAngles(double A, double B, double C) {
	angleA = A;
	angleB = B;
	angleC = C;
	totalAngle = A+B+C;
}

const bool Triangle::validateTriangle() {
	return (totalAngle <=180);
}
//function to find the area of a Triangle and return its area
double AreaOfATriangle (double BaseA, double TriangleHeight) {
	double area = (BaseA*TriangleHeight)/2.0;
	return area;
}
//function to find the perimeter of a Triangle and return the perimeter
double PerimeterOfATriangle (double SideA, double BaseA, double SideB) {
	double perimeter = SideA + BaseA + SideB;
	return perimeter;
}
//fucntion to determine the type of Triangle and return the greater angle
double DetermineTriangle (double A, double B, double C, double MaxAngle) {
	MaxAngle = std::max(A, B);
	MaxAngle = std::max(MaxAngle, C);
	return MaxAngle;
}
