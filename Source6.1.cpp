#include <iostream>

int sum(int first, int second);
int diff(int first, int second);
int multiplication(int first, int second);
double division(int first, int second);


int main(int argc, char** argv)
{
	int a = 5, b = 10;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;
	
	return 0;
}

int sum(int first, int second)
{
    return first + second;
}

int diff(int first, int second)
{
    return first - second;
}

int multiplication(int first, int second)
{
    return first * second;
}

double division(int first, int second)
{
    return static_cast<double>(first) / static_cast<double>(second);
}
 