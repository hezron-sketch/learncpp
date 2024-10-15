#include <iostream>
using namespace std;

class Shape
{
    int height, width;

public:
    Shape(int x, int y) : height(x), width(y) {};
    int area(void) { return height * width; };
};

int main()
{
    Shape rectangle(3, 5);
    Shape *preq, *bar, *baz;
    preq = &rectangle;
    bar = new Shape(5, 5);
    baz = new Shape[2]{{12, 26}, {30, 30}};
    cout << "Area of bar: " << bar->area() << endl;
    cout << "Area of baz first shape: " << baz[0].area() << endl;
    cout << "Area of baz second shape: " << baz[1].area() << endl;

    delete bar;
    delete[] baz;
}