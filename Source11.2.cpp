#include <iostream>
#include <string>

int main()
{
    std::string strResultWord{"malina"};
    std::string strInWord{};

    while(true)
    {
        std::cout << "Угадайте слово: ";
        std::cin >> strInWord;
        if(strResultWord == strInWord)
        {
            std::cout << "Правильно! Вы победили! Загаданное слово — " << strResultWord << std::endl;
            break;
        }
        std::cout << "Неправильно" << std::endl;
    }

    return 0;
}