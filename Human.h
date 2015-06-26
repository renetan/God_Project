#ifndef HUMAN_H
#define HUMAN_H

#include "Animal.h"

class Human : public Animal
{
public:
 Human();
 Human(string name, double energy, double power, double size, double weight, Point2D* point, State state); 
 void Analyze();	
};

#endif
