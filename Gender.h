//
// Created by XaveF on 5/4/2022.
//

#ifndef TWOCLASSES_GENDER_H
#define TWOCLASSES_GENDER_H

#include "Person.h"

class Gender {
private:
    Person _male;
    Person _female;
public:
    void SetMale(Person male);

    void SetFemale(Person female);

    Person GetMale() const;

    Person GetFemale() const;

    void Print();
};


#endif //TWOCLASSES_GENDER_H
