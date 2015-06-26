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
  string getName()const { return this->name; }
  void setName(string name) { this->name=name; }
	int getPopulation()const { return population.size(); }
	void destroy();
	void add(Entity* e);
  ~Planet();
  
};

#endif
