#pragma once
class ICalculatorOperation
{
public:
	virtual double Calculate(double x, double y) = 0;
	int Thing() { return 3; }
};

