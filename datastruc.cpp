#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct movies
{
    /* data */
    string title;
    int year;
} films[3];

void printmovie(movies wmovies);

int main()
{
    string yyear;
    int n;

    for (n = 0; n < 3; n++)
    {
        cout << n + 1 << ". Enter movie title: ";
        getline(cin, films[n].title);
        cout << "Year: ";
        getline(cin, yyear);
        stringstream(yyear) >> films[n].year;
    }

    cout << "\n";
    cout << "Moviename \t Yearrelease" << endl;
    for (n = 0; n < 3; n++)
    {
        printmovie(films[n]);
    }
}

void printmovie(movies wmovies)
{

    cout << wmovies.title << "\t" << wmovies.year << endl;
}
