#include "Calculator.h"

Calculator::Calculator(ICalculatorOperation* operation) : _calculatorOperation(operation)
{

}

double Calculator::Solve(double x, double y)
{
	return this->_calculatorOperation->Calculate(x, y);
}
