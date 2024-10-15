//Address-of operator, used to obtain address of a variable
#include <iostream>

using namespace std;

int main(){
    int myvar = 17;
    // declaring pointers
    // type *name;
    // type - type pointed to by pointer
    int *addrs;
    addrs = &myvar;
    cout << addrs;

}