#include <iostream>
#include "Person.h"
#include "Cat.h"

using namespace std;

int main()
{
    char prenom [80];
    printf("Entrer un prenom : ");
    scanf("%s", prenom);

    char nom [80];
    printf("Entrer un nom : ");
    scanf("%s", nom);

    char email [80];
    printf("Entrer une adresse email : ");
    scanf("%s", email);

    char address [80];
    printf("Entrer une adresse postale : ");
    scanf("%s", address);

    float poids;
    printf("Entrer un poids : ");
    scanf("%f", &poids);

    float taille;
    printf("Entrer une taille : ");
    scanf("%f", &taille);

    Person * person2 = new Person(prenom, nom, email, address, 0, poids, taille);
    person2->getAll();

    Cat * cat1 = new Cat("Main Coon", "Felix", "LeChat", 0, 10, 50);
    cout << cat1->getFirstName() << endl;
    cout << cat1->species << endl;

    return 0;
}
