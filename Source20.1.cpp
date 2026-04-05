#include <iostream>
#include <exception>
#include <string>

int function(std::string str, int forbidden_length)
{
    if(str.length() == forbidden_length)
    {
        throw std::exception();
    }
    return str.length();
}

int main ()
{
	int fLength{};
    std::string str;
	std::cout << "Введите запретную длину: ";
    std::cin >> fLength;
    while(true)
    {
        std::cout << "Введите слово: ";
        std::getline(std::cin >> std::ws, str);
        try
        {
            int len = function(str, fLength);
            std::cout << "Длина слова \"" << str << "\" равна " << len << std::endl;
        }
        catch(const std::exception & err)
        {
            std::cerr << "Вы ввели слово запретной длины! До свидания" << std::endl;
            break;
        }
    }
    return 0;
}
