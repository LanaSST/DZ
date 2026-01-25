#include <iostream>
#include <cstdlib>

double* create_array(int size)
{
    double * arr = new double[size]();
    return arr;
}

int main(int argc, char** argv)
{
	int size{};
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    double * arr = create_array(size);

    std::cout << "Массив: ";
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";        
    }
    
    delete[] arr;
    return 0;
}
