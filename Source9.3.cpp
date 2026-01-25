#include <iostream>

void print(int* numbers, int size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << numbers[i] << " "; 
    }
    std::cout << std::endl;
}

void reverse(int* numbers, int size)
{
    int nSize = size / 2;
    int tmp{};
    for(int i = 0; i < nSize; ++i)
    {
        if(i != (size - i - 1))
        {
            tmp = numbers[i];
            numbers[i] = numbers[size - i - 1];
            numbers[size - i - 1] = tmp;
        }
    }
}

int main(int argc, char** argv)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 10;

	std::cout << "До функции reverse: ";
    print(arr, size);

	reverse(arr, size);

	std::cout << "После функции reverse: ";
    print(arr, size);

	return 0;
}
