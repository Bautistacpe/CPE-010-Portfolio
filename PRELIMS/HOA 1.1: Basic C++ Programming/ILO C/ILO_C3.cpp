//Create a C++ program that has a function that will calculate the distance between two points.

//import math module into the program to use sqrt() and pow() function
#include <iostream>
#include <cmath>

//declaring the function
double DistanceOfTwoPoints(int PointX1, int PointX2, int PointY1, int PointY2);

//main function
int main() {
	//declare all parameters
	int PointX1;
	int PointY1;
	int PointX2;
	int PointY2;
	
	//porgram ask for users input
	std::cout <<"Please enter the x-axis of the first point: ";
	std::cin >> PointX1;
	std::cout <<"Please enter the y-axis of the first point: ";
	std::cin >> PointY1;
	std::cout <<"Please enter the x-axis of the second point: ";
	std::cin >> PointX2;
	std::cout <<"Please enter the y-axis of the second point: ";
	std::cin >> PointY2;
	std::cout <<"The distance between these two points is: " <<DistanceOfTwoPoints(PointX1, PointX2, PointY1, PointY2);
}

//function for calculating distance between two points
double DistanceOfTwoPoints(int PointX1, int PointX2, int PointY1, int PointY2) {
	double Distance = sqrt(pow(PointX2 - PointX1, 2.0) + pow(PointY2 - PointY1, 2.0));
	return Distance;
}

