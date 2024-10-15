#include <iostream>
using namespace std;

class Shape
{
protected:
    int height, width;

public:
    void set_values(int a, int b)
    {
        height = a;
        width = b;
    }
    // virtual member
    /**/
    virtual int area() { return 0; };
};

class Triangle : public Shape
{
public:
    int area()
    {
        return height * width / 2;
    };
};

class Rectangle : public Shape
{
public:
    int area()
    {
        return height * width;
    };
};

int main()
{
    Triangle tri;
    Rectangle rect;
    Shape poly3;

    Shape *poly1 = &tri;
    Shape *poly2 = &rect;
    Shape *poly4 = &poly3;

    poly1->set_values(10, 20);
    poly2->set_values(10, 20);
    // usage of the virtual class member
    cout << "Rectangle area from the pointer: " << poly1->area() << endl;
    cout << "Rectangle area from the pointer: " << poly2->area() << endl;
}