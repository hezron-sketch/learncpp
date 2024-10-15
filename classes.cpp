#include <iostream>
using namespace std;

class Rectangle
{
    int height, width;

public:
    // void set_values(int, int);
    Rectangle(int);
    Rectangle(int, int);
    int area() { return height * width; }
};

class Vcube
{
    int length, width, height;

public:
    Vcube();
    Vcube(int, int, int);
    int vol() { return length * width * height; }
};

// void Rectangle::set_values(int x, int y)
// {
//     height = x;
//     width = y;
// }

// constructor
// no return type, same name as class name
// default constructor takes no arguments
// constructor overloading
Vcube::Vcube()
{
    length = 12;
    width = 29;
    height = 11;
}

Vcube::Vcube(int a, int b, int c)
{
    length = a;
    width = b;
    height = c;
}

Rectangle::Rectangle(int x)
{
    height = 4;
    width = x;
}
Rectangle::Rectangle(int a, int b)
{
    height = a;
    width = b;
}

int main()
{
    Rectangle rect(4, 10); // functional form
    Rectangle rectb = 33;
    Vcube cube1;
    Vcube cube2{3, 44, 7}; // uniform initialization

    cout << rectb.area() << endl;
    // rect.set_values(20,33);
    cout << "area: " << rect.area() << endl;
    cout << "vol: " << cube1.vol() << endl;
    cout << "vol: " << cube2.vol();
}