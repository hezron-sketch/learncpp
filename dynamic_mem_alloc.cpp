#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *x, *y;
    // dynamic memory is allocated using operator: new
    // return a pointer to the beginning of the new block of memory allocated

    // for single element memory allocation type
    // pointer = new type;

    // allocate a block of array of elements of type int
    x = new int[4];
    x[0] = 200;
    cout << *(x) << endl;

    // dynamic memory alloc is not done during runtime and uses memory heap
    // therefore it success is not guaranteed
    // handling dynamic memory alloc issues
    // default bal_alloc from default mem alloc error is from
    // pointer = new type[];
    // another method is use of nothrow with new to return a null pointer in case of failed memory alloc i.e
    y = new (nothrow) int[3];
    if (y != nullptr)
    {
        cout << "Memory allocation successful!" << endl;
    }

    // deleting dynamically allocated memory to save  computing resources
    // syntax: delete pointer; or:
    int times, number;
    int *pnt;

    cout << "How many times would you type: ";
    cin >> times;
    pnt = new (nothrow) int[number];
    if (pnt == nullptr)
    {
        cout << "Error: Memory allocation failed!";
    }
    else
    {
        for (number = 0; number < times; number++)
        {
            cout << "Enter number: " << endl;

            cin >> pnt[number];
        }
        for (number = 0; number < times; number++)
        {
            cout << pnt[number] << ", ";
            delete[] pnt;
        }
    }
    return 0;
}