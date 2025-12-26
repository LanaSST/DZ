#include <iostream>
#include <string>

int main()
{
    const int nMaxRows{3};
    const int nMaxCol{6};
    int arrTest[nMaxRows][nMaxCol] = 
    { 
        {60, 50, 40, 30, 10, 20 },
        {14, 24, 34, 44, 54, 64 },
        {12, 22, 32, 42, 52, 62 }
    };
    std::string sep;

    std::cout << "Массив:" << std::endl;
    for(auto & col: arrTest)
    {
        for(int i: col)
        {
            std::cout << i << '\t';
        }
        std::cout << std::endl;
    }  
    std::cout << std::endl;

    int nMin = arrTest[0][0];
    int nMax = arrTest[0][0];
    int nMinR{};
    int nMinC{};
    int nMaxR{};
    int nMaxC{};
    for(int i{}; i < nMaxRows; ++i)
    {
        for(int j{}; j < nMaxCol; ++j)
        {
            if(nMin > arrTest[i][j])
            {
                nMin = arrTest[i][j];
                nMinR = i;
                nMinC = j;
            }
            if(nMax < arrTest[i][j])
            {
                nMax = arrTest[i][j];
                nMaxR = i;
                nMaxC = j;
            }
        }
    }

    std::cout << "Индекс минимального элемента: " << nMinR << " " << nMinC << std::endl;
    std::cout << "Индекс максимального элемента: " << nMaxR << " " << nMaxC << std::endl;
    return 0;
}
