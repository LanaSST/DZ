#include <iostream>
#include <string>

int main()
{
    std::string strFirstName;
    std::string strLastName;

    std::cout << "Введите имя: ";
    std::cin >> strFirstName;
    std::cout << "Введите фамилию: ";
    std::cin >> strLastName;
    std::cout << "Здравствуйте, " << strFirstName + " " + strLastName + "!" << std::endl;

    return 0;
}