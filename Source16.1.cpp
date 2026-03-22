#include <iostream>
#include <fstream>
#include <string>

class Address {
private:
    std::string strTown;
    std::string strStreet;
    int nHouse{};
    int nFlat{};

public:
    Address(std::string_view strTown_, std::string_view strStreet_, int nHouse_, int nFlat_)
        : strTown(strTown_), strStreet(strStreet_), nHouse(nHouse_), nFlat(nFlat_)
    {};

    std::string getAllAddress() {
        return strTown + ", " + strStreet + ", " + std::to_string(nHouse) + ", " + std::to_string(nFlat);
    }
};

int main()
{
    std::ifstream ifile{"in.txt"};
    std::ofstream ofile{"out.txt"};

    Address ** arr{nullptr};
    int size{};

    if(ifile.is_open())
    {
        std::string data{};
        if(ifile >> data) 
        {
            size = std::stoi(data);
            if(size > 0) {
                arr = new Address*[size];
           
                std::string strTown;
                std::string strStreet;
                int nHouse{};
                int nFlat{};
                for(int i{}; i < size; ++i)
                {
                    ifile >> strTown;
                    ifile >> strStreet;
                    ifile >> nHouse;
                    ifile >> nFlat;
                    arr[i] = new Address(strTown, strStreet, nHouse, nFlat);
                }
            }
        }
    }
    ifile.close();

    if(ofile.is_open()) 
    {
        ofile << size << std::endl;
        for(int i{size}; i > 0; --i)
        {
            ofile << arr[i-1]->getAllAddress() << std::endl;
        }
    }
    ofile.close();

    for(int i{}; i < size; ++i)
        delete arr[i];
    delete[] arr;
    return 0;
}
