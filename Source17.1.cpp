#include <iostream>

class Figure
{
private:
    int nCountSide{};
    std::string name;

public:    
    Figure(int nCountSide_ = 0, std::string_view name_ = "Фигура") : nCountSide(nCountSide_), name(name_)
    { }

    int getCountSide()
    {
        return nCountSide;
    }

    std::string getName()
    {
        return name;
    }
};

class Triangle: public Figure
{
public: 
    Triangle() : Figure(3, "Треугольник")
    { }
};

class Quadrangle: public Figure
{
public: 
    Quadrangle() : Figure(4, "Четырёхугольник")
    { }
};


int main()
{
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << figure.getName() << ": " << figure.getCountSide() << std::endl;
    std::cout << triangle.getName() << ": " << triangle.getCountSide() << std::endl;
    std::cout << quadrangle.getName() << ": " << quadrangle.getCountSide() << std::endl;
    return 0;
}
