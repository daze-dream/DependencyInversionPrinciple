#pragma once
#include "ICalculatorOperation.h"
class AddOperation :
    public ICalculatorOperation
{
public:
    double Calculate(double x, double y);
};

