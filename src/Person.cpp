#include "Person.h"

Person::Person()
{

}

Person::Person(string firstName, string lastName, string email, string adress, time_t birthDate, float weight, float height)
{
    this->email = email;
    this->address = adress;
    Creature::firstName = firstName;
    Creature::lastName = lastName;
    Creature::birthDate = birthDate;
    Creature::weight = weight;
    Creature::height = height;
}

Person::~Person()
{

}

string Person::getFirstName()
{
    return Creature::firstName;
}

string Person::getLastName()
{
    return Creature::lastName;
}


string Person::getEmail()
{
    return this->email;
}

string Person::getAddress()
{
    return this->address;
}

string Person::getAll()
{
    cout << "Prenom : " <<Creature::firstName << endl;
    cout << "Nom : " << Creature::lastName << endl;
    cout << "Email : " << this->email << endl;
    cout << "Adresse : " << this->address << endl;
    cout << "Taille : " << Creature::height << endl;
    cout << "Poids : " << Creature::weight << endl;
}


