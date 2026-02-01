#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream ifile{"in.txt"};

    int ** arr{nullptr};
    int nRows{};
    int nCols{};

    if(ifile.is_open())
    {
        std::string rows{};
        std::string cols{};
        std::string data{};
        if(ifile >> rows && ifile >> cols) 
        {
            nRows = std::stoi(rows);
            nCols = std::stoi(cols);
            if(nRows > 0 && nCols > 0) {
                arr = new int*[nRows]();
                for(int i = 0; i < nRows; ++i)
                {
                    arr[i] = new int[nCols]();
                }
                for(int i = 0; i < nRows; ++i)
                {
                    for(int j = 0; j < nCols; ++j)
                    {
                        ifile >> data;
                        arr[i][j] = std::stoi(data);
                    }
                }
            }

        }
    }
    ifile.close();

    for(int i = 0; i < nRows; ++i)
    {
        for(int j = nCols; j > 0; --j)
        {
            std::cout << arr[i][j-1] << " ";
        }
        std::cout << std::endl;
    }

    for(int i = 0; i < nRows; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}