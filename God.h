#ifndef GOD_H
#define GOD_H

#include "Human.h"
#include "Scene.h"

class God : public Human
{
private:
 Scene* scena = new Scene;
public:
 God();
 God(string name);
 God& operator=(God& s);
 void CreatePlanets();
 void ErasePopulation(string planetName);
 void DestroyPlanet(string planetName);
 void AddEntity(string planetName, EntityType creature, int number);
 ~God();
};

#endif
