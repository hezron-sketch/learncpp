// A different name by which a type can be identified
// use typedef/using

#include <iostream>
#include <string>
using namespace std;

int main()
{

    // using typedef from c
    // syntax: typedef existing_type new_type_name;
    typedef string customString;
    typedef int customInt;

    // using using
    // syntax: using new_type_name = existing_type;
    using customFloat = float;

    // normal usage
    customString name;
    customInt age;
    customFloat height = 2.2;
    name = "Hezron Onyango";
    age = 22;

    cout << "Height in (m): " << height;
}