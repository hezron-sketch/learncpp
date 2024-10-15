// custom copy constructor that carries out deep copy of an object
#include <iostream>
#include <string>
using namespace std;

class Object
{
    string *pntr;

public:
    // constructor
    Object(const string &str) : pntr(new string(str)) {}
    // destructor
    ~Object() { delete pntr; }
    // copy constructor
    Object(const Object &x) : pntr(new string(x.content())) {}
    // const member function returning a const&
    const string &content() const { return *pntr; }

    // overloading the operator= for copy assignment
    Object &operator=(const Object &Copy_assignment)
    {
        *pntr = Copy_assignment.content();
        return *this;
    }
};

int main()
{
    Object myObj("mtu HALF");
    Object name("Hezron");

    // implicit copy assignment done here
    name = myObj;
    cout << "my name is: " << name.content() << "\n";
    cout << "What's in myObj: " << myObj.content();
}