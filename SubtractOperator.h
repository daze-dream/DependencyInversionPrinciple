#pragma once
#include "ICalculatorOperation.h"
class SubtractOperator :
    public ICalculatorOperation
{
public:
    double Calculate(double x, double y);
};

