//arrays as function arguments
#include <iostream>
#include <array>
using namespace std;

void printarray (int arg[], int length){
    for (int n = 0; n<length; ++n)
    {
        cout << arg[n] << " ";
    }
    cout << "\n";
}

int main (){
    
    int firstarray[] = {33, 55, 84, 89};
    int secondarray[] = {43, 54, 23, 12, 44, 32};

    printarray(firstarray, 3);
}