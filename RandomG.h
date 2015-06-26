#ifndef RANDOMG_H
#define RANDOM_H

#include "Entity.h"
#include "Point2D.h"

class RandomG 
{
public:
 Point2D getRandomCordinates();
 void getRandomDamage(Entity& smth);
 double RandomNumber();
};

#endif
