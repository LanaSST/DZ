#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream ofile{"out.txt"};

    int * arr;
    int size{};

    std::cout << "Введите размер массива: ";
    std::cin >> size;
    if(size > 0)
    {
        arr = new int[size];
        for(int i{}; i < size; ++i)
        {
            std::cout << "arr[" << i << "]: ";
            std::cin >> arr[i];
        }

        if(ofile.is_open()) 
        {
            ofile << size << std::endl;
            for(int i{size}; i > 0; --i)
            {
                ofile << arr[i-1] << " ";
            }
        }
        ofile.close();
        delete[] arr;
    }
    else
    {
        std::cout << "Ошибка ввода размера массива" << std::endl;
    }

    return 0;
}