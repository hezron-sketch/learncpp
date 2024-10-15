#include <iostream>
#include <string>
using namespace std;

class Destructor
{
    string *ptr;

public:
    Destructor() : ptr(new string) {}
    Destructor(const string &str) : ptr(new string(str)) {}
    // destructor syntax ~ClassName {delete pointer;}
    // destructor is called at the end of the class member lifetime
    ~Destructor() { delete ptr; }
    const string &content() const { return *ptr; }
};

int main()
{
    Destructor destructor("Hello world");
    cout << destructor.content();
}