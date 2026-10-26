//Create a function that will take two numbers and display the sum.
#include <iostream>

//declare function SumofTwoNum as int
int SumOfTwoNum(int SumA, int SumB);


//main function to add two numbers assigned to each variable
int main() {
	std::cout <<"The sum of the two numbers is: " <<SumOfTwoNum(6,7);
}

//function to add two numbers and return the total sum
int SumOfTwoNum(int SumA, int SumB) {
	int TotalSum = SumA + SumB;
	return TotalSum;
}
