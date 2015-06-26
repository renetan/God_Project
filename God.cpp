#include "God.h"
#include <iostream>

God::Godstring name) : Human(name) {}

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
 sc->setPlanetName(planetName);
 sc->destroyPlanet();
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

God& God:: operator=(God& s)
{
 scena = s.scena;
 return *this;
}
