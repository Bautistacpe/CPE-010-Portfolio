//Create a function that will take two Boolean values and display the result of all logical operations then return true if it was a success.
#include <iostream>

//declare function BooleanOperations as bool
bool BooleanOperations (bool BoolA, bool BoolB);

//main function to after function is done
int main() {
	std::cout <<"-----All Logical Operations-----" <<std::endl;
	BooleanOperations (true, false);
}

//function to display all logical operation as 0 or 1 and return true if successful
bool BooleanOperations (bool BoolA, bool BoolB) {
	std::cout <<"BoolA: " <<BoolA <<std::endl;
	std::cout <<"BoolB: " <<BoolB <<std::endl;
	std::cout <<std::endl;
	std::cout <<"Negation: " <<std::endl;
	std::cout <<"BoolA: " <<!BoolA <<std::endl;
	std::cout <<"BoolB: " <<!BoolB <<std::endl;
	std::cout <<std::endl;
	std::cout <<"Conjunction: " <<(BoolA && BoolB) <<std::endl;
	std::cout <<std::endl;
	std::cout <<"Disjunction: " <<(BoolA || BoolB) <<std::endl;
	return true;
}
