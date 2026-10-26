//Create a C++ program to swap the two numbers in different variables.

//import algorithm module to the program to use swap() module
#include <iostream>
#include <algorithm>

int main() {
	//declare both variables
	int Var1 = 420;
	int Var2 = 2763;
	
	std::cout <<"Content of variables before the swap:" <<std::endl;
	std::cout <<"Var1: " <<Var1 <<std::endl;
	std::cout <<"Var2: " <<Var2 <<std::endl;
	std::cout <<"\n";
	
	//use swap() function to swap the two numbers
	std::swap(Var1, Var2);
	
	std::cout <<"Content of variables after the swap:" <<std::endl;
	std::cout <<"Var1: " <<Var1 <<std::endl;
	std::cout <<"Var2: " <<Var2 <<std::endl;
}
