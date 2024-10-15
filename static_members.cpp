// static class members can be used to store data or functions
#include <iostream>
using namespace std;

class Dummy
{
public:
    static int n;
    Dummy() { n++; };
};

// cannot be initialized directly in the class but somewhere outside.
int Dummy::n = 0;

int main()
{
    Dummy a;
    // Uncomment the line below and check output once more.
    // Dummy v[10];
    cout << a.n;
}