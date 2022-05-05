//
// Created by XaveF on 5/4/2022.
//

#include "Person.h"
using std::cout;
using std::endl;

Person::Person()
{
    _name = "NoName";
    _age = 0;
}

void Person::SetName(const string &name)
{
    _name = name;
}

void Person::SetAge(const int &age)
{
    _age = age;
}

string Person::GetName() const
{
    return _name;
}

int Person::GetAge() const
{
    return _age;
}

void Person::Print() const
{
    cout << "\"Name\": \"" << _name << "\", \"Age\": " << _age << endl;
}