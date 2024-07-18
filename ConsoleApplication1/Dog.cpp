#include "Dog.h"

Dog::Dog() : Pet(), _breed("unknown") {}

Dog::Dog(string breed) : Pet(), _breed(breed) {}

Dog::Dog(string name, int age, float weight, string breed) : Pet(name, age, weight), _breed(breed) {}

void Dog::setBreed(string breed)
{
    _breed = breed;
}

string Dog::getBreed() const
{
    return _breed;
}

void Dog::sound() const
{
    cout << "Woof" << endl;
}

void Dog::type() const
{
    cout << "Type: Dog" << endl;
}

void Dog::show() const
{
    cout << "DOG" << endl;
    Pet::show();
    cout << "Breed: " << getBreed() << endl;
}
