#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
    bool gender;

public:
    Human() {}
    Human(bool gender) : gender(gender) {}
};

class Man : public Human
{
private:
    string name;

public:
    Man() {}
    Man(bool gender) : Human(gender) {}
    Man(string name) : name(name) {}

    bool gender()
    {
        bool gender = true;
        return gender;
    }
    string Name()
    {
        return name;
    }
};

class Woman : public Human
{
private:
    string name;

public:
    Woman(string name) : name(name) {}
    string Name()
    {
        return name;
    }
};

int main()
{
    Man someone("Alex");
    if (someone.gender() == true)
    {
        cout << "Gender: Man" << endl;
        cout << someone.Name() << endl;
    }
    else
    {
        cout << "Gender: Woman";
    }
}