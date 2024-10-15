#include <iostream>
using namespace std;

class Shape
{
protected:
    int height, width;

public:
    Shape(int a, int b)
    {
        height = a;
        width = b;
    }
    virtual int area() = 0;
    // pure virtual members can be called
    // from the abstract base class
    void print_area(void)
    {
        cout << area() << "\n";
    }
};

class Triangle : public Shape
{
public:
    Triangle(int a, int b) : Shape(a, b) {}
    int area(void)
    {
        return height * width / 2;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int a, int b) : Shape(a, b) {}
    int area(void)
    {
        return height * width;
    }
};

int main()
{
    Shape *shape1 = new Triangle(15, 20);
    Shape *shape2 = new Rectangle(15, 20);
    shape1->print_area();
    shape2->print_area();
    delete shape1;
    delete shape2;
    return 0;
}