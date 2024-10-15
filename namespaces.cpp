//Namespaces are used to avoid name collision 
// namespace scope

#include <iostream>
using namespace std;

namespace foo {
    int value() { return 5; }
}

namespace bar {
    const double pi = 3.1416;
    double value() { return 2 * pi; }
}
int main() {
    // using "using"
    {
        using foo::value;
        cout << value() << "\n";
    }
    // using to introduce the entire namespace
    using namespace bar;
    cout << value() << "\n";
    cout << pi << "\n";
}