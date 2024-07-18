#pragma once
#include "Pet.h"

class Cat : public Pet
{
    string _breed;
public:
    Cat();
    Cat(string);
    Cat(string, int, float, string);
    void setBreed(string);
    string getBreed() const;
    void sound() const override;
    void type() const override;
    void show() const override;
};
