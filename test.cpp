#include <iostream>
using namespace std;

class CVector
{
public:
    int x, y;
    CVector() {};
    CVector(int a, int b) : x(a), y(b) {};
};

CVector operator+(const CVector &lhs, const CVector &rhs)
{
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

int main()
{
    CVector lhs(3, 4);
    CVector rhs(4, 1);
    CVector results;
    results = lhs + rhs;
    cout << results.x << ", " << results.y;
    return 0;
}
