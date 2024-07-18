#include "Cat.h"

Cat::Cat() : Pet(), _breed("unknown") {}

Cat::Cat(string breed) : Pet(), _breed(breed) {}

Cat::Cat(string name, int age, float weight, string breed) : Pet(name, age, weight), _breed(breed) {}

void Cat::setBreed(string breed)
{
    _breed = breed;
}

string Cat::getBreed() const
{
    return _breed;
}

void Cat::sound() const
{
    cout << "Meow" << endl;
}

void Cat::type() const
{
    cout << "Type: Cat" << endl;
}

void Cat::show() const
{
    cout << "CAT" << endl;
    Pet::show();
    cout << "Breed: " << getBreed() << endl;
}
