#include "Creature.h"

Creature::Creature()
{

}

Creature::Creature(string firstName, string lastName, time_t birthDate, float weight, float height)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->birthDate = birthDate;
    this->weight = weight;
    this->height = height;
}

Creature::~Creature()
{
    //dtor
}
