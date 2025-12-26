#include <iostream>
#include <string>

int main()
{
    const int nMaxSize{10};
    int arrTest[nMaxSize] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    std::string sep;

    std::cout << "Массив: ";
    for(int i: arrTest)
    {
        std::cout << sep << i;
        sep = ", ";
    }
    std::cout << std::endl;

    int nMin = arrTest[0];
    int nMax = arrTest[0];
    for(int i{1}; i < nMaxSize; ++i)
    {
        if(nMin > arrTest[i])
            nMin = arrTest[i];
        if(nMax < arrTest[i])
            nMax = arrTest[i];
    }

    std::cout << "Минимальный элемент: " << nMin << std::endl;
    std::cout << "Максимальный элемент: " << nMax << std::endl;
    return 0;
}
