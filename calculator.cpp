#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Div (double a, double b)
{
    return a / b;
}

int Calculator::Square (double a)
{
    return a * a;
}

int Calculator::Factorial (int a)
{
	int ans = 1;
	if (a < 0) throw std::invalid_argument("Number cannot be a negative");
	if (a == 0 || a == 1) return 1;
    for (int i = a; i > 1; i--){
		ans *= i;
	}
	return ans;
}

