// A friend is a non-class member that can access private, protected and public members
// functions of a class
#include <iostream>
using namespace std;

class Shape
{
    int height, width;

public:
    Shape() {}
    Shape(int height, int width) : height(height), width(width) {}
    int area() { return height * width; }
    friend Shape duplicate(const Shape &);
};

Shape duplicate(const Shape &param)
{
    Shape dup;
    dup.height = param.height * 2;
    dup.width = param.width * 2;
    return dup;
}

int main()
{
    Shape rectangle(10, 20);
    Shape unknown;
    unknown = duplicate(rectangle);
    cout << "Duplicated unknown shape value: " << unknown.area();
}