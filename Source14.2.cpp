#include <iostream>

    struct Account
    {
        int nNumber{};
        std::string strName;
        double dBalance{};
    };

    void setNewBalance(Account & acc, double dNewBalance)
    {
        acc.dBalance = dNewBalance;
    }

    void print(const Account & acc)
    {
        std::cout << "Ваш счёт: " << acc.strName << ", " <<acc.nNumber << ", " << acc.dBalance << std::endl;
    }

int main()
{
    Account acc;
    double dNewBalance{};
    std::cout << "Введите номер счёта: ";
    std::cin >> acc.nNumber;
    std::cout << std::endl;
    std::cout << "Введите имя владельца: ";
    std::cin >> acc.strName;
    std::cout << std::endl;
    std::cout << "Введите баланс: ";
    std::cin >> acc.dBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> dNewBalance;
    std::cout << std::endl;
    setNewBalance(acc, dNewBalance);
    print(acc);

    return 0;
}
