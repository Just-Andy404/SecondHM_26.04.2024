#pragma once
#include "Pet.h"

class Hamster : public Pet
{
    string _breed;
public:
    Hamster();
    Hamster(string);
    Hamster(string, int, float, string);
    void setBreed(string);
    string getBreed() const;
    void sound() const override;
    void type() const override;
    void show() const override;
};
