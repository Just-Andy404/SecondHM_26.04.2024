#include "Hamster.h"

Hamster::Hamster() : Pet(), _breed("unknown") {}

Hamster::Hamster(string breed) : Pet(), _breed(breed) {}

Hamster::Hamster(string name, int age, float weight, string breed) : Pet(name, age, weight), _breed(breed) {}

void Hamster::setBreed(string breed)
{
    _breed = breed;
}

string Hamster::getBreed() const
{
    return _breed;
}

void Hamster::sound() const
{
    cout << "Squeak" << endl;
}

void Hamster::type() const
{
    cout << "Type: Hamster" << endl;
}

void Hamster::show() const
{
    cout << "HAMSTER" << endl;
    Pet::show();
    cout << "Breed: " << getBreed() << endl;
}
