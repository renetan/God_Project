#ifndef ANIMAL_H
#define ANIMAL_H

#include "Entity.h"

class Animal : public Entity
{
public:
 Animal();
 Animal(string name, double energy, double power, double size, double weight, Point2D* point, State state); 

 void Eat();
 void Sleep();
 void SearchingForFood();
};

#endif
