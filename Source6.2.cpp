#include <iostream>

void func(int value, int power, int & result);

int main(int argc, char** argv)
{
	int value = 5, power = 2, result = 1;

    func(value, power, result);
    std::cout << value << " в степени " << power << " = " << result << std::endl;

    value = 3;
    power = 3;
    result = 1;

    func(value, power, result);
    std::cout << value << " в степени " << power << " = " << result << std::endl;

    value = 4;
    power = 4;
    result = 1;

    func(value, power, result);
    std::cout << value << " в степени " << power << " = " << result << std::endl;

	return 0;
}

void func(int value, int power, int & result)
{
    for (int i = 0; i < power; i++)
    {
        result *= value;
    }
}

