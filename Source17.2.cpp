#include <iostream>

class Figure
{
private:
    std::string name;

public:    
    Figure(std::string_view name_ = "Фигура") : name(name_)
    { }

    std::string getName()
    {
        return name;
    }

    virtual void print() = 0;

    virtual ~Figure() = default;
};

class Triangle: public Figure
{
private:
    int sideA{};
    int sideB{};
    int sideC{};
    int angleA{};
    int angleB{};
    int angleC{};

public: 
    Triangle(int sideA_, int sideB_, int sideC_, int angleA_, int angleB_, int angleC_, std::string_view name_ = "Треугольник") :
        Figure(name_), sideA(sideA_), sideB(sideB_), sideC(sideC_), angleA(angleA_), angleB(angleB_), angleC(angleC_)
    { }

    void print() override
    {
        std::cout << getName() << ":" << std::endl;
        std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
        std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << std::endl;
    }
};

class RightAngledTriangle: public Triangle
{
public: 
    RightAngledTriangle(int sideA_, int sideB_, int sideC_, int angleA_, int angleB_, std::string_view name_ = "Прямоугольный треугольник") :
        Triangle(sideA_, sideB_, sideC_, angleA_, angleB_, 90, name_)
    { }

};

class IsoscelesTriangle: public Triangle
{
public: 
    IsoscelesTriangle(int sideAC_, int sideB_, int angleAС_, int angleB_, std::string_view name_ = "Равнобедренный треугольник") :
        Triangle(sideAC_, sideB_, sideAC_, angleAС_, angleB_, angleAС_, name_)
    { }

};

class EquilateralTriangle: public Triangle
{
public: 
    EquilateralTriangle(int side_, std::string_view name_ = "Равносторонний треугольник") :
        Triangle(side_, side_, side_, 60, 60, 60, name_)
    { }

};


class Quadrangle: public Figure
{
private:
    int sideA{};
    int sideB{};
    int sideC{};
    int sideD{};
    int angleA{};
    int angleB{};
    int angleC{};    
    int angleD{};
public: 
    Quadrangle(int sideA_, int sideB_, int sideC_, int sideD_, int angleA_, int angleB_, int angleC_, int angleD_, std::string_view name_ = "Четырехугольник") : 
        Figure(name_), sideA(sideA_), sideB(sideB_), sideC(sideC_), sideD(sideD_), angleA(angleA_), angleB(angleB_), angleC(angleC_), angleD(angleD_)
    { }

    void print() override
    {
        std::cout << getName() << ":" << std::endl;
        std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << " d=" << sideD << std::endl;
        std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << " D=" << angleD << std::endl;
    }
};

class Parallelogram: public Quadrangle
{
public: 
    Parallelogram(int sideA_, int sideB_, int angleA_, int angleB_, std::string_view name_ = "Параллелограмм") : 
        Quadrangle(sideA_, sideB_, sideA_, sideB_, angleA_, angleB_, angleA_, angleB_, name_)
    { }

};

class Rectangle: public Parallelogram
{
public: 
    Rectangle(int sideA_, int sideB_, std::string_view name_ = "Прямоугольник") : 
        Parallelogram(sideA_, sideB_, 90, 90, name_)
    { }

};

class Rhomb: public Parallelogram
{
public: 
    Rhomb(int side_, int angleA_, int angleB_, std::string_view name_ = "Ромб") : 
        Parallelogram(side_, side_, angleA_, angleB_, name_)
    { }

};

class Square: public Rectangle
{
public: 
    Square(int side_, std::string_view name_ = "Квадрат") : 
        Rectangle(side_, side_, name_)
    { }

};

void print_info(Figure * figure)
{
    if(figure)
        figure->print();
    else
        std::cout << "invalid figure" << std::endl;    
}


int main()
{
    Triangle triangle{10, 20, 30, 50, 60, 70};
    RightAngledTriangle rightAngledTriangle{10, 20, 30, 50, 60};
    IsoscelesTriangle isoscelesTriangle{10, 20, 50, 60};
    EquilateralTriangle equilateralTriangle{30};
    Quadrangle quadrangle{10, 20, 30, 40, 50, 60, 70, 80};
    Rectangle rectangle{10, 20};
    Square square{20};
    Parallelogram parallelogram{20, 30, 30, 40};
    Rhomb rhomb{30, 30, 40};

    triangle.print();
    std::cout << std::endl;
    rightAngledTriangle.print();
    std::cout << std::endl;
    isoscelesTriangle.print();
    std::cout << std::endl;
    equilateralTriangle.print();
    std::cout << std::endl;
    quadrangle.print();
    std::cout << std::endl;
    rectangle.print();
    std::cout << std::endl;
    square.print();
    std::cout << std::endl;
    parallelogram.print();
    std::cout << std::endl;
    rhomb.print();

    return 0;
}