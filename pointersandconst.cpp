#include <iostream> 
using namespace std;


int main(){
    {
        int x = 488;

    //this pointer can only read but not change the value being pointed
    const int *p = &x;

    // can only read
    cout << "Value of x: " << *p<<"\n";

    // trying to modify the value of x using dereferencing operator throws a read-only error
    // uncomment code below to check error😂😂
    //*p = 200;
    }

    
   
    
}
