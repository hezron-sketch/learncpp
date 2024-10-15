// FUnction templates in CPP
// syntax template <template-parameters> function-declaration

// template <class SomeType>
// SomeType sum (SomeType a, SomeType b)
// {
//   return a+b;
// }

#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b)
{
    T result;
    result = a + b;
    return result;
}


// Another example
template <class L, class M>
bool are_equal(L a, M b)
{
    return (a == b);
}


// Non-type template arhuments
template <class K, int Q>
K fixed_multiply (K val)
{
    return val * Q;
}



int main (){
    int i = 10, j = 50, h;
    double l = 30.44, m = 55.44, g;
    g = sum<double>(l, m); // same as g = sum(l,m);
    h = sum<int>(i, j); // same as h = sum(i,j);

    cout << h;
    cout << g << endl;

    if (are_equal(10, 10.0)) // equivalent to: if (are_equal<int, double>(10,10.0))
        cout << "They are equal! \n";
        else
            cout << "They are not equal \n";

    // Non-type template argument
        cout << fixed_multiply<int, 4>(30);
}