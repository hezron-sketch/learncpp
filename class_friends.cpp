#include <iostream>
using namespace std;

class Square;
class Shape
{
    int height, width;

public:
    int area() { return width * height; }
    void Convert(Square a);
};

class Square
{
    friend Shape;

private:
    int side;

public:
    Square(int side) : side(side) {}
};

void Shape::Convert(Square a)
{
    height = a.side;
    width = a.side;
}

int main()
{
    Square square(20);
    Shape rect;
    rect.Convert(square);
    cout << "Converted rectangle: " << rect.area();
}
class Square;