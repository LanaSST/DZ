#include <iostream>

namespace sum {
    int calc(int x, int y)
    {
        return x + y;
    }
}

namespace diff {
    int calc(int x, int y)
    {
        return x - y;
    }
}

namespace multiply {
    int calc(int x, int y)
    {
        return x * y;
    }
}

namespace divide {
    int calc(int x, int y)
    {
        if(y > 0)
            return x / y;
        return -1;    
    }
}


int main(int argc, char** argv)
{
    int x{500};
    int y{100};
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "Сложение: " << sum::calc(x, y) << std::endl;
    std::cout << "Вычитание: " << diff::calc(x, y) << std::endl;
    std::cout << "Умножение: " << multiply::calc(x, y) << std::endl;
    std::cout << "Деление: " << divide::calc(x, y) << std::endl;
}
