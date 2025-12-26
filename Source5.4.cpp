#include <iostream>
#include <string>

int main()
{
    const int nMaxSize = 10;
    int arrTest[nMaxSize]{ 5, 8, 2, 5, -72, 6, 8, 9, 1, 7 };

    std::cout << "Массив до сортировки:\t\t";
    for(int element: arrTest)
    {
        std::cout << element << "\t";
    };
    std::cout << std::endl;

    bool swapped{ false };
    for(int i = nMaxSize-1; i > 0; --i)
    {
        swapped = false;
        for(int j = nMaxSize-1; j > 0; --j)
        {
            if(arrTest[j] < arrTest[j-1])
            {
                int tmp{ arrTest[j] };
                arrTest[j] = arrTest[j-1];
                arrTest[j-1] = tmp;
                swapped = true;
            }
        }
        // std::cout << i << ": ";
        // for(int element: arrTest) { std::cout << element << "\t"; }
        // std::cout << std::endl;
        if(!swapped)
        {
            break;
        }
    }

    std::cout << std::endl;
    std::cout << "Массив после сортировки:\t";
    for(int element: arrTest)
    {
        std::cout << element << "\t";
    }

    return 0;
}
