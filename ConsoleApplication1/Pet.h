#pragma once
#include <iostream>
using namespace std;

class Pet
{
    string _name;
    int _age;
    float _weight;
public:
    Pet();
    Pet(string, int, float);
    void setName(string);
    void setAge(int);
    void setWeight(float);
    string getName() const;
    int getAge() const;
    float getWeight() const;
    virtual void sound() const = 0;
    virtual void type() const = 0;
    virtual void show() const;
};
