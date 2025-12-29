#include <iostream>

long long fibo(int nValue);

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

long long fibo(int nCount)
{
    if(nCount == 0) {
        return 0;
    }
    if(nCount == 1) {
        return 1;
    }
    long long nVar1{ 0 };
    long long nVar2{ 1 };
    
    for(int i = 2; i <= nCount; i++)
    {
        long long nTmp = nVar1;
        nVar1 = nVar2;
        nVar2 = nTmp + nVar2;
    }
    return nVar2;
}

