#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream ifile{"in.txt"};

    if(ifile.is_open())
    {
        std::string data{};
        while (ifile >> data)
        {
            std::cout << data << std::endl;
        }
    }
    ifile.close();

    return 0;
}