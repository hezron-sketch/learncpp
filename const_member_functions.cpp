// const member functions -> data is read-only, though the constructor works initially...
#include <iostream>
using namespace std;

class Cmf
{
public:
    int x;
    Cmf(int a) : x(a) {};
    // this function cannot be accessed by check because its not a const function until you uncomment const
    int get() /*const*/ { return x; };
};

int main()
{
    // qualifying a class member as a const member function;
    //  const MyClass myobject;
    const Cmf check(10);
    // check.x = 40;
    cout << check.x;
    // check.get();
}