#include "Parrot.h"

Parrot::Parrot() : Pet(), _breed("unknown") {}

Parrot::Parrot(string breed) : Pet(), _breed(breed) {}

Parrot::Parrot(string name, int age, float weight, string breed) : Pet(name, age, weight), _breed(breed) {}

void Parrot::setBreed(string breed)
{
    _breed = breed;
}

string Parrot::getBreed() const
{
    return _breed;
}

void Parrot::sound() const
{
    cout << "Squawk" << endl;
}

void Parrot::type() const
{
    cout << "Type: Parrot" << endl;
}

void Parrot::show() const
{
    cout << "PARROT" << endl;
    Pet::show();
    cout << "Breed: " << getBreed() << endl;
}
