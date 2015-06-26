#include "Planet.h"
#icnlude <iostream>

using namespace std;

Planet::Planet(string name) 
{
 this->name=name;
}

void Planet::destroy()
{
 population.erase(population.begin(), population.begin() + population.size());
}

void Planet::add(Entity* e)
{
 population.push_back(e);
}

Planet::~Planet()
{
 while (!population.empty())
 {
  delete population.back();   //"delete" erases the memory allocated for the object of the vector
  population.pop_back();
 }
}
