#include "Cat.h"

Cat::Cat(string species, string fistName, string lastName, time_t brithDate, float weight, float height )
{
    this->species = species;
    Creature::firstName = fistName;
    Creature::lastName = lastName;
    Creature::birthDate = birthDate;
    Creature::weight = weight;
    Creature::height = height;
}

Cat::~Cat()
{
    //dtor
}

string Cat::getFirstName()
{
    return Creature::firstName;
}
