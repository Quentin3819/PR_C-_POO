#ifndef CAT_H
#define CAT_H
#include "Creature.h"

class Cat : Creature
{
    public:
        string species;

        Cat();
        Cat(string species,string firstName, string lastName, time_t birthDate, float weight, float height);
        virtual ~Cat();
        string getFirstName();

    protected:

    private:
};

#endif // CAT_H
