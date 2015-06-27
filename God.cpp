#include "God.h"
#include <iostream>

God::God (string name) : Human(name) {}

God::God() {}

void God::CreatePlanets()
{
 scena->createPlanets();
}

void God::ErasePopulation(string planetName)
{
 scena->setPlanetName(planetName);
 scena->ErasePopulation();
}

void God::DestroyPlanet(string planetName)
{
 scena->setPlanetName(planetName);
 scena->destroyPlanet();
}

void God::AddEntity(string planetName, EntityType creature, int number)
{
 scena->setPlanetName(planetName);
 scena->setEntity(creature);
 scena->setNumber(number);
 scena->addEntity();
}

God::~God()
{
 delete scena;
}
