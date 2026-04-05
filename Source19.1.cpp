#include <iostream>

#define MODE 1
#ifndef MODE
#error Режим не определен
#elif MODE == 1
    double add(double First, double Second)
    {
        return First + Second;
    }
#endif

int main()
{
#if MODE == 0
    std::cout <<  "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    double first{};
    double second{};
    std::cout <<  "Работаю в боевом режиме" << std::endl;
    std::cout <<  "Введите число 1: ";
    std::cin >> first;
    std::cout <<  "Введите число 2: ";
    std::cin >> second;
    std::cout <<  "Результат сложения: " << add(first, second) << std::endl;
#else
    std::cout <<  "Неизвестный режим. Завершение работы" << std::endl;
#endif
    return 0;
}
