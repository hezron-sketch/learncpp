// Odd and even number code

#include <iostream>
using namespace std;

void odd(int x);
void even(int x);


int main()
{
    int i;
    do {

    cout << "Enter 0 to exit this simple checker: \n";
    cin >> i;
    odd(i);
    } while (i != 0);
    return 0;
    
}

void odd(int x){
    if ((x%2)!=0)
        cout << "Odd number\n" << endl;
    else
        even(x);
}

void even (int x){
    if ((x%2)==0)
    cout << "Even Number!\n" << endl;
    else
        odd(x);
}