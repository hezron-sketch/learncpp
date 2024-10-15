#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Sum
{
public:
    int a, b;
    Sum() {};
    Sum(int a, int b) : a(a), b(b) {};
};

// A function that overloads operator + with -
Sum operator+(const Sum &ls, const Sum &rs)
{
    Sum item;
    item.a = ls.a - rs.a;
    item.b = ls.b - rs.b;
    return item;
}

int main()
{
    int a, b, c, d;
    string _a, _b, _c, _d;

    cout << "Enter Value for set 1(a*, b): ";
    getline(cin, _a);
    stringstream(_a) >> a;
    cout << "Value for (a, b*): ";
    getline(cin, _b);
    stringstream(_b) >> b;
    cout << "\nEnter Value for set 2(a*, b): ";
    getline(cin, _c);
    stringstream(_c) >> c;
    cout << "Value for (a, b*): ";
    getline(cin, _d);
    stringstream(_d) >> d;
    Sum set_a(a, b);
    Sum set_b(c, d);
    Sum result;
    result = set_a + set_b;
    cout
        << "\nSet 1: (" << set_a.a << ", " << set_a.a << ")\n"
        << "Set 2: (" << set_b.a << ", " << set_b.b << ")";

    cout << "\nResults from overriden operator + that subtracts: " << endl;
    cout << "Result: (" << result.a << ", " << result.b << ")";
}