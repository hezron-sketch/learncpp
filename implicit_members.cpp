// default and delete implicit members
#include <iostream>
using namespace std;

class Shape
{
    int height, width;

public:
    Shape(int a, int b) : height(a), width(b) {}
    Shape() = default;
    Shape(const Shape &other) = delete;
    int area() { return height * width; }
};

int main()
{
    Shape rectangle(10, 22);
    Shape square;
    // The line below would throw a function deleted error
    // Shape circle(square);
    cout << "Area of rectangle: " << rectangle.area();
}