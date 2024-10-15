#include <iostream>
#include <string>
using namespace std;

template <class T>
class CTemplate
{
    T x, y;

public:
    CTemplate(T first, T scnd)
    {
        x = first, y = scnd;
    }
    T getmax();
};

template <class T>
T CTemplate<T>::getmax()
{
    T rslt;
    rslt = x > y ? x : y;
    return rslt;
}

int main()
{
    CTemplate<int> mypair(100, 70);
    CTemplate<double> mydoubs(20.0, 19.99);
    CTemplate<string> mystr("Hello ", "World");
    cout << mypair.getmax() << "\n";
    cout << mydoubs.getmax() << "\n";
}