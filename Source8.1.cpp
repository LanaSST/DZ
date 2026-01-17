#include <iostream>

static int i{0};

void counting_function()
{
    std::cout << "Количество вызовов функции counting_function(): " << i << std::endl;
}

int main(int argc, char** argv)
{
    for (i = 0; i < 15; i++)
    {
        counting_function();
    }
}
