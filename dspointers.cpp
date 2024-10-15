// data structures and pointers
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct human
{
    /* data */
    string name;
    int age;
};

void printhuman(human whuman);

int main()
{
    human person;
    string mystr;
    human *phuman;

    phuman = &person;

    cout << "Enter name: \n";

    // Pointer use the -> operator as a dereferencing operator with  data structures
    // getline(cin, phuman->name); equivalent to getline(cin, (*phuman.name)/(*phuman).name)
    getline(cin, phuman->name);
    cout << "Enter age: \n";
    getline(cin, mystr);
    stringstream(mystr) >> phuman->age;

    printhuman(person);
}

void printhuman(human whuman)
{
    cout << "Name: " << whuman.name << "\n";
    cout << "Age: " << whuman.age;
}
