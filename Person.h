//
// Created by XaveF on 5/4/2022.
//

#ifndef TWOCLASSES_PERSON_H
#define TWOCLASSES_PERSON_H

#include <iostream>
using std::string;

class Person
{
private:
    string _name;
    int _age;
public:
    Person();
    void SetName(const string& name);
    void SetAge(const int& age);
    string GetName()const;
    int GetAge()const;
    void Print() const;
};


#endif //TWOCLASSES_PERSON_H
