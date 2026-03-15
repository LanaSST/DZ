#include <iostream>

int main()
{
    struct Account
    {
        int nNumber{};
        std::string strName;
        double dBalance{};

        void setNewBalance(Account & acc, double dNewBalance)
        {
            acc.dBalance = dNewBalance;
        }

        void print()
        {
            std::cout << "Ваш счёт: " << strName << ", " << nNumber << ", " << dBalance << std::endl;
        }
    };

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
    acc.setNewBalance(acc, dNewBalance);
    acc.print();

    return 0;
}
