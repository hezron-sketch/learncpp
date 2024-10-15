#include <iostream>
using namespace std;

class Copy_assgnt
{
    int *pointer;

public:
    Copy_assgnt(const int &a) : pointer(new int(a)) {}

    const int &content() const { return *pointer; };
    // copy assignment
    Copy_assgnt operator=(const Copy_assgnt &a)
    {
        delete pointer;
        pointer = new int(a.content());
        return *this;
    }
};

int main()
{
    Copy_assgnt X(200);
    Copy_assgnt fullcopy(60);
    fullcopy = X;
    cout << "Value in fullcopy: " << fullcopy.content();
}