#include "Planet.h"

#icnlude<iostream>

using namespace std;

Planet::Planet(string name) 
{
 this->name = name;
}

void Planet::erasePopulation()
{
 population.erase(population.begin(), population.begin() + population.size()); //unishtojava cqloto naselenie na planetata
}

void Planet::addPopulation(EntityType* e, int number)
{
 for (int i = 0; i < number; i++)
 {
  switch (e)
  {
   case entity:
   population.push_back(new Entity()); 
   break;
   
   case animal:
   population.push_back(new Animal()); 
   break;
   
   case human:
   population.push_back(new Human()); 
   break;
   
   case god:
   population.push_back(new God()); 
   break;
  }
 }
}

Planet::~Planet()
{
 while (!population.empty())
 {
  delete population.back();   //"delete" erases the memory allocated for the object of the vector
  population.pop_back();
 }
}
