//Create a C++ program that has a function to convert temperature in Kelvin to Fahrenheit.

#include <iostream>

//declaring the function
double KelvinToFahrenheit(double Kelvin);

//main program to output temperature conversion
int main () {
	double Kelvin;
    std::cout <<"Please enter the temperature in Kelvin: ";
	std::cin >> Kelvin;
	std::cout <<"Temperature in Fahrenheit: " <<KelvinToFahrenheit(Kelvin) <<std::endl;
}

//function for converting Kelvin to Fahrenheit
double KelvinToFahrenheit(double Kelvin) {
	double Celsius = Kelvin - 273.15;
	double Fahrenheit = (1.8)*Celsius + 32;
	return Fahrenheit;
}
