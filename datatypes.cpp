#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int addition (int a, int b) {
    int r;
    r = a + b;
    return r;
}

//Arguments passed by reference
void duplicate(int& a, int&b, int&c){
    a *= 2;
    b *= 2;
    c *= 2;
}

int main ()
{
    // string mystr;
    // float price;
    // int quantity;
    // int balance;
    // float total;

    // balance = 500;

    // cout << "Enter price: $";
    // getline(cin, mystr);
    // cout << "Enter quantity: ";
    // stringstream(mystr) >> price;
    // getline(cin, mystr);
    // stringstream(mystr) >> quantity;
    // total = price * quantity;
    // cout << "Total Price: $" << total << endl;

    

    // // if statement
    // if (total > balance){
    //     cout << "insufficient funds in your account: $" << balance << endl;
    //     ;
    // } else {
    //     cout << "Deducted: $" << total << " Balance: $" << balance - total << endl;
    // }

    // The while statement
    // while (expression) statement

    // int n;
    // while (n > 0,n++, n < 11){
    //     cout << n  << endl;
    //     ;
    // }
    // return 0;


    // int s;
    // s = addition(200, 49);
    // cout << "Results from function: " << s << endl;

    int x=1, y=2, z=3;
    duplicate (x, y, z);
    cout << x;
}