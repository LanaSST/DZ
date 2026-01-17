#include <iostream>

void swap(int& a, int& b)
{
    //ограничение в 2 байта
    a = a << 16;
    a = a | b;
    b = a & 0xffff0000;
    b = b >> 16;
    a &= 0x0000ffff;
}

int main(int argc, char** argv)
{
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}
