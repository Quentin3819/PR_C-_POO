#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <new>
#include "Creature.h"

class Person : public Creature
{
    public:
        string address;
        string email;

        Person();
        Person(string firstName, string lastName, string email, string adress, time_t birthDate, float weight, float height);
        string getFirstName();
        string getLastName();
        string getEmail();
        string getAddress();
        string getAll();

        virtual ~Person();

    protected:

    private:



};



#endif // PERSON_H
