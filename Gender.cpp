//
// Created by XaveF on 5/4/2022.
//

#include "Gender.h"
using std::cout;
using std::endl;

void Gender::SetMale(Person male)
{
    _male = male;
}

void Gender::SetFemale(Person female)
{
    _female = female;
}

Person Gender::GetMale() const
{
    return _male;
}

Person Gender::GetFemale() const
{
    return _female;
}

void Gender::Print()
{
    cout << "Male = ";
    _male.Print();
    cout << "Female =";
    _female.Print();
    cout << endl;
}