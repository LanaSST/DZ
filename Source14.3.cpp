#include <iostream>

struct Address
{
    std::string strTown;
    std::string strStreet;
    int nNumberHouse{};
    int nNumberFlat{};
    std::string strIndex;

};

void print(const Address & addr)
{
    std::cout << "Город: " << addr.strTown << std::endl;
    std::cout << "Улица: " << addr.strStreet << std::endl;
    std::cout << "Номер дома: " << addr.nNumberHouse << std::endl;
    std::cout << "Номер квартиры: " << addr.nNumberFlat << std::endl;
    std::cout << "Индекс: " << addr.strIndex << std::endl;
    std::cout << std::endl;
}


int main()
{
    Address addr1{"Moskow", "Arbat", 12, 8, "123456"};
    Address addr2{"Izhevsk", "Pushkina", 59, 143, "953769"};
    print(addr1);
    print(addr2);

    return 0;
}