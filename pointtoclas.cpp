// Pointers to classes in c++
#include <iostream>
using namespace std;

class Shape
{
    int height, width;

public:
    // Constructor
    Shape(int x, int y) : height(x), width(y) {};
    int area() { return height * width; };
};

int main()
{
    Shape rect(40, 22);
    // Initializing a pointer of type shape
    Shape *prect;
    prect = &rect;
    cout << "Area of rectangle: " << prect->area();
}