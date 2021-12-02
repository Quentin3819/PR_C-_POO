#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
using namespace std;

class Creature
{
    public:
        string firstName;
        string lastName;
        time_t birthDate;
        float height;
        float weight;

        Creature();
        Creature(string firstName, string lastName, time_t birthDate, float weight, float height);
        virtual ~Creature();

    protected:

    private:
};

#endif // CREATURE_H
