// DependencyInversionPrinciple.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Adapted from: https://medium.com/@kedren.villena/simplifying-dependency-inversion-principle-dip-59228122649a
// With help from: https://stackoverflow.com/questions/44897527/using-abstract-class-in-c-for-dependency-injection/44897595
// This was made to help understand the D in SOLID.
/*	Dependency Inversion states to "depend on abstractions, not concretions. In other words, high and low level modules
*	should depend on interfaces. This allows extension, and combined with Dependency injection, makes for well written
*	code.
*	It can even be extended with Factory Design Patterns to facilitate further extensibility.
*/

#include <iostream>
#include "Calculator.h"
#include "ICalculatorOperation.h"
#include "AddOperation.h"
#include "SubtractOperator.h"

int main()
{

	Calculator calculator(new SubtractOperator);
	std::cout << calculator.Solve(1, 2) << std::endl;


	system("pause");
	return 0;
}
