#pragma once
#include "Pet.h"

class Parrot : public Pet
{
    string _breed;
public:
    Parrot();
    Parrot(string);
    Parrot(string, int, float, string);
    void setBreed(string);
    string getBreed() const;
    void sound() const override;
    void type() const override;
    void show() const override;
};
