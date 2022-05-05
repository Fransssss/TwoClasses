// Title: Set people's identity based on Gender
// Purpose: Create two class, one for a person name and age, one for person's gender
// Have fun - Enjoy the process - Practices make improvement
// Author: Fransiskus Agapa

#include <iostream>
#include "Person.h"
#include "Gender.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    Gender person;
    Person personM;
    Person personF;
    Gender GroupMen[10];
    Person peopleM[10];

    cout << endl;
    personM.SetName("Matthew");
    personM.SetAge(20);
    person.SetMale(personM);
    cout << endl;
    personF.SetName("Rebecca");
    personF.SetAge(19);
    person.SetFemale(personF);
    person.Print();

    string nameM;
    int ageM = 0;
    cout << endl << " == List of 10 Men == " << endl;
    for(size_t i = 0; i < 10; ++i)
    {
        cout << i+1 << ") Man name: " << endl;
        cin >> nameM;
        peopleM[i].SetName(nameM);
        cout << " Man age: " << endl;
        cin >> ageM;
        peopleM[i].SetAge(ageM);
    }

    // assign element into new array type Gender
    for(size_t i = 0; i < 10; ++i)
    {
        GroupMen[i].SetMale(peopleM[i]);
    }

    cout << endl << " == 10 Men listed == " << endl;
    for(size_t i = 0; i < 10; ++i)
    {
        GroupMen[i].Print();
    }

    return 0;
}
