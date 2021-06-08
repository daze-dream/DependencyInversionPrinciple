#pragma once
#include "ICalculatorOperation.h"
class Calculator
{
public:
	Calculator(ICalculatorOperation* operation);
	double Solve(double x, double y);
private:
	ICalculatorOperation* _calculatorOperation;


};

