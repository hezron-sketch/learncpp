// this in C++
//  Means a pointer to the object whose member is being executed
#include <iostream>
#include <string>
using namespace std;

class Dummy
{
public:
    bool isitme(Dummy &param);
};

bool Dummy::isitme(Dummy &param)
{
    if (&param == this)
        return true;
    else
        return false;
}

int main()
{
    Dummy a, *b;
    b = &a;
    string result = "True";
    if (b->isitme(a))
    {
        cout << "Absolutely true";
    }
    else
        return false;
}