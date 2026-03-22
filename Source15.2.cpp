#include <iostream>
#include <string>

class Counter {
private:
    int counter{};

public:
    Counter(int counter_) : counter(counter_)
    {};

    double inc() {
        return ++counter;
    };
    double dec() {
        return --counter;
    };
    int getCounter() {
        return counter;
    }
};

int main()
{
    std::string strAnswer;
    int n{1};
    std::cout << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
    std::getline(std::cin >> std::ws, strAnswer);
    if(strAnswer == "y") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> n;
    }

    std::string strCommand;
    Counter counter{n};
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::getline(std::cin >> std::ws, strCommand);
        if(strCommand == "+")
            counter.inc();
        else if(strCommand == "-")
            counter.dec();
        else if(strCommand == "=")
            std::cout << counter.getCounter() << std::endl;            
    }
    while (strCommand != "x");

    std::cout << "До свидания!" << std::endl;
   
    return 0;
}