#ifndef PLANET_H
#define PLANET_H

#include "Human.h"
#include "Animal.h"
#include "Entity.h"

class Planet
{
private:
 vector<Entity*> population;
 string name;
	
public:
 Planet(string name);    
 string getName()const{ return this->name; }
 void setName(string name) { this->name = name; }
 int getPopulation()const{ return population.size(); }
 void erasePopulation();
 void addPopulation(Entity* e, int number);
 ~Planet();

};

#endif
