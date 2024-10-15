// abstract base class
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
    virtual int area() = 0;
};

class Rectangle : public Shape
{
public:
    int area(void)
    {
        return height * width;
    }
};

class Triangle : public Shape
{
public:
    int area(void)
    {
        return height * width / 2;
    }
};

int main()
{
    Triangle tria;
    Rectangle rect;
    // an abstract base class is usefull here⤵️
    Shape *shape1 = &tria;
    Shape *shape2 = &rect;
    shape1->set_values(15, 20);
    shape2->set_values(15, 20);
    cout << shape1->area() << "\n";
    cout << shape2->area();
    return 0;
}