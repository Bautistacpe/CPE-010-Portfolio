//Create a function that will return whether variable A is greater than variable B.

//import algorithm module to use max() function
#include <iostream>
#include <algorithm>

//declare function VarAGreaterThanVarB as int
int VarAGreaterThanVarB (int VarA, int VarB);

int main() {
	//assign paramters with values
	int VarA = 21;
	int VarB = 69;
	
	//if-else statement that analyzes the greater variable and determine whether it's VarA or not
	VarAGreaterThanVarB (VarA, VarB);
	if (VarAGreaterThanVarB (VarA, VarB) == VarA) {
		std::cout <<"Variable A is greater than Variable B";
	}
	else {
		std::cout <<"Variable A is NOT greater than Variable B";
	}
}

//function to determine if VarA is greater than VarB
int VarAGreaterThanVarB (int VarA, int VarB) {
	int GreaterVar = std::max(VarA, VarB);
	return GreaterVar;
}
