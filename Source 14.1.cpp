#include <iostream>

enum En_Mouth {exit_, jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

int main()
{

    int nMouthNumber{-1};
    En_Mouth mouth{};

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> nMouthNumber;
        mouth = static_cast<En_Mouth>(nMouthNumber);

        switch(mouth) {
            case jan : 
                std::cout << "Январь" << std::endl;
                break;
            case  feb: 
                std::cout << "Февраль" << std::endl;
                break;
            case  mar: 
                std::cout << "Март" << std::endl;
                break;
            case  apr: 
                std::cout << "Апрель" << std::endl;
                break;                
            case  may: 
                std::cout << "Май" << std::endl;
                break;                
            case  jun: 
                std::cout << "Июнь" << std::endl;
                break;                
            case  jul: 
                std::cout << "Июль" << std::endl;
                break;                
            case  aug: 
                std::cout << "Август" << std::endl;
                break;                                                                                
            case  sep: 
                std::cout << "Сентябрь" << std::endl;
                break; 
            case  oct: 
                std::cout << "Октябрь" << std::endl;
                break; 
            case  nov: 
                std::cout << "Ноябрь" << std::endl;
                break; 
            case  dec: 
                std::cout << "Декабрь" << std::endl;
                break;       
            case exit_ :
                std::cout << "До свидания" << std::endl;
                break;                                                                                             
            default:
                std::cout << "Неправильный номер!" << std::endl;
                break;
        }
    }
    while (mouth != exit_);

    return 0;
}