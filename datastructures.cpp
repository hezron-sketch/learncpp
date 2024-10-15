// Group of data elements grouped together under one name
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct car
{
    /* data */
    string model;
    int year;
} mine, yours;

void printcar(car wcar);

int main()
{
    string yyear;

    mine.model = "Mercedes Benz";
    mine.year = 2024;

    cout << "Type in your favourite car: ";
    getline(cin, yours.model);
    cout << "Year: ";
    getline(cin, yyear);
    stringstream(yyear) >> yours.year;

    cout << "My favorite car is: \n";
    printcar(mine);
    cout << endl;
    cout << "Yours: \n";
    printcar(yours);
}

void printcar(car wcar)
{
    cout << wcar.model << endl;
    cout << "( " << wcar.year << " )";
}
