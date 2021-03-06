//
// Created by dimitar on 03.05.18.
//

#ifndef ANIMALS_DOMESTICANIMAL_H
#define ANIMALS_DOMESTICANIMAL_H

#include "Animal.h"

class DomesticAnimal : public Animal {

private:
    char* name;

    void Copy(const DomesticAnimal& da);
    void Erase();
    virtual void print(std::ostream& os) const;

public:
    DomesticAnimal();
    DomesticAnimal(const char* region, char gender, double weight, int age, const char* name);
    DomesticAnimal(const DomesticAnimal& da);
    DomesticAnimal& operator=(const DomesticAnimal& da);
    void feed();
    virtual Creature* clone() const;
    virtual ~DomesticAnimal();

    friend std::ostream& operator<<(std::ostream& os, const DomesticAnimal& da);

};


#endif //ANIMALS_DOMESTICANIMAL_H
