#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

int** create_two_dim_array(int rows, int cols)
{
    int ** arr = new int*[rows]();
    for(int i = 0; i < rows; ++i)
    {
        arr[i] = new int[cols]();
    }
    return arr;
}

void fill_two_dim_array(int ** table, int rows, int cols)
{
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            table[i][j] = (i + 1) * (j + 1);
        }
    }
}

void print_two_dim_array(int ** table, int rows, int cols)
{
    int w = std::to_string(rows*cols).length() + 1;
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            std::cout << std::setw(w) << std::right << table[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void delete_two_dim_array(int ** table, int rows)
{
    for(int i = 0; i < rows; ++i)
    {
        delete[] table[i];
    }
    delete[] table;
}

int main(int argc, char** argv)
{
	int rows{};
    int cols{};
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    int ** table = create_two_dim_array(rows, cols);

    fill_two_dim_array(table, rows, cols);

    std::cout << "Таблица умножения: " << std::endl;
    print_two_dim_array(table, rows, cols);

    delete_two_dim_array(table, rows);

    return 0;
}
