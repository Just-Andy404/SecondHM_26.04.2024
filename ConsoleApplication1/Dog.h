#pragma once
#include "Pet.h"

class Dog : public Pet
{
    string _breed;
public:
    Dog();
    Dog(string);
    Dog(string, int, float, string);
    void setBreed(string);
    string getBreed() const;
    void sound() const override;
    void type() const override;
    void show() const override;
};
