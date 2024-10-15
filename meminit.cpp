#include <iostream>
using namespace std;

class Base
{
    int length;

public:
    Base(int l) : length(l) {}; // member initialization using the : before consructor body
    int area() { return length * length; }
};

class Volume
{
    Base base;
    int height;

public:
    Volume(int b, int h) : base(b), height(h) {};
    int volume() { return base.area() * height; }
};

int main()
{

    Volume v(10, 3);
    /* objects of  class Volume can only be construcuted using a parameter,
    the Volume Constructor needs to call the Base's constructor using the member initializer list*/
    cout << v.volume() << endl;
}