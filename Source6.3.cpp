#include <iostream>

int fibo(int nValue);

int main(int argc, char** argv)
{
	int nCount{};

    std::cout << "Введите число: ";
    std::cin >> nCount;
    std::cout << "Числа Фибоначчи: ";

    for(int i = 0; i < nCount; i++)
    {
        std::cout << fibo(i) << " ";
    }

	return 0;
}

int fibo(int nCount)
{
    if(nCount == 0) {
        return 0;
    }
    if(nCount == 1) {
        return 1;
    }
    return fibo(nCount-1) + fibo(nCount-2);  
}

