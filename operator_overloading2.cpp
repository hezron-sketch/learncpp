#include <iostream>
using namespace std;

class CVector
{
public:
    int x, y;
    CVector() {}
    CVector(int a, int b) : x(a), y(b) {};
};

CVector
operator+(const CVector &lhs, const CVector &rhs)
{
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

int main()
{
    CVector lhs(2, 7);
    CVector rhs(3, 8);
    CVector results;
    results = lhs + rhs;
    cout << results.x << ", " << results.y;
}