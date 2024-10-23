//additon,subtraction,multiplication, and division of two numbers
#include<iostream>
using namespace std;

int main()
{
	// Declare varibles
	double num1, num2;
	
	//input
	std::cout << "Enter first number: ";
	std::cin >> num1;
	
	std::cout << "Enter second number";
	std::cin >> num2;
	
	// Perform opeartion
	double sum = num1 + num2;
	double difference =  num1 - num2;
	double product = num1 * num2;
	
	//Check ifd the second number is not zero for division
	if (num2 != 0) {
		double quotion = num1 / num2;
		
		// Ouutput result
		std::cout << "Sum: " << sum << std::endl;
		std::cout << "Difference: " << difference << std::endl;
		std::cout << "Product: " << product << std::endl;
		std::cout << "Quotion: " << quotion << std::endl;
	} else{
		std::cout << "Error: Division by zero is undefined." << std::endl;
	}
		
	
	return 0;
	
}










