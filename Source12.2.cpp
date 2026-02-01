#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream ifile{"in.txt"};

    int * arr;
    int size{};

    if(ifile.is_open())
    {
        std::string data{};
        if(ifile >> data) 
        {
            size = std::stoi(data);
            if(size > 0) {
                arr = new int[size];
            }
            for(int i{}; i < size; ++i)
            {
                ifile >> data;
                arr[i] = std::stoi(data);
            }
        }
    }
    ifile.close();

    for(int i = size; i > 0; --i)
    {
        std::cout << arr[i-1] << " ";
    }

    delete[] arr;
    return 0;
}