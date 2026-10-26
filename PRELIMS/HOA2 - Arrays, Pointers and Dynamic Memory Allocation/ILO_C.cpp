#include <iostream>
// import string modudle to use string data type
#include <string>

// creating class for Fruits
class Fruit {
public:
//declaring variables
	std::string Fname;
	double Fprice;
	int Fquantity;

// constrcutor code (with new variable names)
	Fruit(std::string newFname, double newFprice, int newFquantity) {
		Fname = newFname;
		Fprice = newFprice;
		Fquantity = newFquantity;	
		std::cout <<"Constructor Called" <<std::endl;
	}

// destructor code
	~Fruit() {
	}

// copy constructor code
	Fruit(const Fruit &copyFruit) {
		Fname = copyFruit.Fname;
		Fprice = copyFruit.Fprice;
		Fquantity = copyFruit.Fquantity;
	}

// copy assignment operator
    Fruit& operator=(const Fruit& copy) {
		if (this != &copy) {
			this->Fname = copy.Fname;
		    this->Fprice = copy.Fprice;
		    this->Fquantity = copy.Fquantity;
		}
		return *this;
	}

// function to calculate sum using variables price and quantity
	double calculateFruitSum() {
		double FruitSum = Fprice * Fquantity;
		return FruitSum;
    }
};

// creating class for Vegetables
class Vegetable {
public:
//declaring variables
	std::string Vname;
	double Vprice;
	int Vquantity;
		
// constrcutor code (with new variable names)		
	Vegetable(std::string newVname, double newVprice, int newVquantity) {
		Vname = newVname;
		Vprice = newVprice;
		Vquantity = newVquantity;	
	}
	

// destructor code	
	~Vegetable() {
	}

// copy constructor code
	Vegetable(const Vegetable &copyVegetable) {
		Vname = copyVegetable.Vname;
		Vprice = copyVegetable.Vprice;
		Vquantity = copyVegetable.Vquantity;
	}
// copy assignmnet operator
    Vegetable& operator=(const Vegetable& copy) {
		if (this != &copy) {
			this->Vname = copy.Vname;
		    this->Vprice = copy.Vprice;
		    this->Vquantity = copy.Vquantity;
		}
		return *this;
	}

// function to calculate sum using variables price and quantity	
	double calculateVegetableSum() {
		double VegetableSum = Vprice * Vquantity;
		return VegetableSum;
	}
};

// main function / driver code
int main() {
// initialize each function used
	double TotalSum(double FruitSum, double VegetableSum);
// create a GroceryList containing the items from Jenna's Grocery List.
// Allocate GroceryList and list them one by one as a string
    std::string* GroceryList = new std::string[4];
	GroceryList[0] = "Apple";
    GroceryList[1] = "Banana";
    GroceryList[2] = "Broccoli";
    GroceryList[3] = "Lettuce";

// create a new GroceryList without the lettice
    std::string* NewGroceryList = new std::string[3];
	NewGroceryList[0] = "Apple";
    NewGroceryList[1] = "Banana";
    NewGroceryList[2] = "Broccoli";

// input all the required details of each product
	Fruit Fruit1("Apple", 10.0, 7);
	Fruit Fruit2("Banana", 10.0, 8);
	Vegetable Vegetable1("Broccoli", 60.0, 12);
	Vegetable Vegetable2("Lettuce", 50.0, 10);

// access each saved instance
	double PriceList[4] = {Fruit1.Fprice, Fruit2.Fprice, Vegetable1.Vprice, Vegetable2.Vprice};
	int QuantityList[4] = {Fruit1.Fquantity, Fruit2.Fquantity, Vegetable1.Vquantity, Vegetable2.Vquantity};
	
//display all the details of each item
    std::cout <<NewGroceryList[0] <<", " <<PriceList[0] <<", " <<QuantityList[0] <<std::endl;
	std::cout <<NewGroceryList[1] <<", " <<PriceList[1] <<", " <<QuantityList[1] <<std::endl;
	std::cout <<NewGroceryList[2] <<", " <<PriceList[2] <<", " <<QuantityList[2] <<std::endl;
	std::cout <<"Total price of Apple: " <<Fruit1.calculateFruitSum() <<std::endl;
    std::cout <<"Total price of Apple: " <<Fruit2.calculateFruitSum() <<std::endl;
    std::cout <<"Total price of Broccoli: " <<Vegetable1.calculateVegetableSum() <<std::endl;
    double FruitSum = Fruit1.calculateFruitSum() + Fruit2.calculateFruitSum();
    double VegetableSum = Vegetable1.calculateVegetableSum();
    std::cout <<"Total price of all the items: " <<TotalSum(FruitSum, VegetableSum);


//delete the old GroceryList array, and points it to the New Grocery List array
    delete[] GroceryList;
    GroceryList = NewGroceryList;
}

// main function of TotalSum
double TotalSum(double FruitSum, double VegetableSum) {
	double PriceTotal = FruitSum + VegetableSum;
	return PriceTotal;
}