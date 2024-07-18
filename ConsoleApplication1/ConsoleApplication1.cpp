#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "Hamster.h"
using namespace std;

int main()
{
    Dog pet1;
    pet1.show();
    pet1.sound();
    pet1.type();
    cout << "=============================" << endl;

    Dog pet2("York");
    pet2.show();
    pet2.sound();
    pet2.type();
    cout << "=============================" << endl;

    Dog pet3("Stella", 10, 22, "York");
    pet3.show();
    pet3.sound();
    pet3.type();
    cout << "=============================" << endl;

    Cat cat1("Kitty", 5, 10, "Siamese");
    cat1.show();
    cat1.sound();
    cat1.type();
    cout << "=============================" << endl;

    Parrot parrot1("Polly", 2, 1.5, "Macaw");
    parrot1.show();
    parrot1.sound();
    parrot1.type();
    cout << "=============================" << endl;

    Hamster hamster1("Hammy", 1, 0.5, "Syrian");
    hamster1.show();
    hamster1.sound();
    hamster1.type();
    cout << "=============================" << endl;

    return 0;
}
