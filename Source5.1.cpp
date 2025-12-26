#include <iostream>
#include <string>

int main()
{
    const int nMaxSize{10};
    int arrTest[nMaxSize] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    std::string sep;

    for(int i: arrTest)
    {
        std::cout << sep << i;
        sep = ", ";
    }
    std::cout << std::endl;
    return 0;
}