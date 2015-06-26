#ifndef SCENE_H
#define SCENE_H

#include "Planet.h"
#include <vector>

class Scene
{
private:
	vector<Planet*> planet;
	string planetName;
	EntityType creature;
	int number;

public:
 Scene();
 void setPlanetName(string name){ this->planetName = name; };
 void setEntity(EntityType& t){ this->creature = t; };
 void setNumber(int n){ this->number = n; };
 int getPlanetSize()const{ return planet.size(); }
  
 void createPlanets();
 void erasePopulation();
 void destroyPlanet();
 void addEntity();
 ~Scene();
};

#endif
