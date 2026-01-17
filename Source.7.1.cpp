#include <iostream>

int main()
{
    
    int iVal{123};
    short shVal{56};
    long lVal{5675};
    long long llVal{56547365384};
    float fVal{67.4f};
    double dVal{57.67};
    long double ldVal{6786.98};
    bool bVal{false};

    std::cout << "short: " << &shVal << " " << sizeof(shVal) << std::endl;
    std::cout << "int: " << &iVal << " " << sizeof(iVal) << std::endl;
    std::cout << "long: " << &lVal << " " << sizeof(lVal) << std::endl;
    std::cout << "long long: " << &llVal << " " << sizeof(llVal) << std::endl;
    std::cout << "float: " << &fVal << " " << sizeof(fVal) << std::endl;
    std::cout << "double: " << &dVal << " " << sizeof(dVal) << std::endl;
    std::cout << "long double: " << &ldVal << " " << sizeof(ldVal) << std::endl;
    std::cout << "bool: " << &bVal << " " << sizeof(bVal) << std::endl;

    return 0;
}