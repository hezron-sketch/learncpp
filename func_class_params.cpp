#include <iostream>
using namespace std;

class FnClassParam
{
public:
    int x;
    FnClassParam(int a) : x(a) {};
    // a const member function that return a const&

    const int &get() const { return x; };
    // member functions can be overloaded based on their constness
    int &get() { return x; };
};

// function that prints the value of x
// function can only access const data members of const member function arg(class/its parameter).
void print(const FnClassParam &arg)
{
    cout << arg.x << "\n";
}

int main()
{
    const FnClassParam check3(28);
    FnClassParam check2(36);
    FnClassParam check(147);
    check.get() = 35;
    print(check.x);
    check2.x = 14;
    print(check2.x);
    // returns an error
    // check3.get() = 22;
}