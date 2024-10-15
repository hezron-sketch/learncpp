#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    {
    int a;
    string mystr, b;

    // declaring pointers
    // type *name;
    int *addrs_a;
    string *addrs_b;
    mystr = "Come home simple Rick";
    stringstream(mystr) >> b;

    // address-of operator to obtain adress of the variable a
    addrs_a = &a;
    addrs_b = &b;

    // dereference operator to let us address the value pointed to by the pointer "Value of the variable"
    *addrs_a = 10;
    //*addrs_b;
    cout << "Value of a: " << a << endl;
    // work out for variable b
    }
    {
        int firstvalue = 10, secondvalue = 22;
        int *p1, *p2;

        p1 = &firstvalue;
        p2 = &secondvalue;
        // value being pointed by pointer1 changes to 12, firstvalue = 12
        *p1 = 12;

        // value being pointed by pointer2 = 12, secondvalue = 12
        *p2 = *p1;

        // pointer2 address copied to pointer1
        p1 = p2;

        // value pointed to by pointer1 changes to 14, 
        *p1 = 14;
        ++p1;
        cout << "Memory size of Pointer1: " << sizeof(p1) << endl;
        cout << "First Value: "<<firstvalue << "\n";
        cout << "Second Value: "<<secondvalue << "\n";
        cout << "Size of second value in memory: "<<sizeof(secondvalue) << "\n";
    }
}