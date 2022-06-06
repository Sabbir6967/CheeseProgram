#include <iostream>
#include <iomanip>  // imported this iomanip library to use format manipulators
#include <string> // Importing this so that we dont have to use std::string everytime

using namespace std;

//Declaring the constants
const float NumOfContainers = 2.76F;
const double Cost = 4.12;
const double Profit = 1.45;
const int CharactLength = 80; // length of total number of asterics that I have put in top line 

int main() {

	//Used these output statements to make program introduction
	//setfill() fills character based on the specified character
	//setw() helps set the field width used for output operations.

	cout << setfill('*');
	cout << setw(80) << "*" << endl;
	cout << setfill('*');
	cout << setw(24) << "*" << " You have entered Cheese Program " << setw(23) << "*" << endl;
	cout << setfill('*');
	cout << setw(80) << "*" << endl;
	cout << endl;

	cout << fixed << setprecision(2); // floating-point values will be written in fixed point notations using fixed method 
								   // setprecision method will keep the numbers in 2 decimal places as I have specified 2

	double CheeseProduced = 0;  // Initializing value for the variable to 0
	cout << "Please enter the total number of kilograms of cheese produced: "; // Prompting user to enter number of cheese produced
	cin >> CheeseProduced; //user input
	cout << endl;

	cout << setfill(' '); // This resets the setfill value which was assigned as "*" earlier

	int ContainersNeeded = ceil(CheeseProduced / NumOfContainers); // Declared variable and used mathmatical expression. Used ceil method to get nearest integer.
	string Output = "The number of containers to hold the cheese is: ";
	cout << Output << std::right << std::setw(CharactLength - Output.length()) << ContainersNeeded << endl; // used right justification to align right and also set width

	double CostOfProduction = (ContainersNeeded * Cost); //declaring the varibale inside main function, so it is not a global variable
	Output = "The cost of producing " + to_string(ContainersNeeded) + " container(s) of cheese is: $ ";
	cout << Output << std::right << std::setw(CharactLength - Output.length()) << CostOfProduction << endl;

	double TotalProfits = (ContainersNeeded * Profit); //declaring the varibale inside main function, so it is not a global variable
	Output = "The profit from producing " + to_string(ContainersNeeded) + " container(s) of cheese is: $ ";
	cout << Output << std::right << std::setw(CharactLength - Output.length()) << TotalProfits << endl;


}

