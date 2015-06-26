#include "Entity.h"

#include<iostream>
#include<string>

using namespace std;

Entity::Entity() 
{ 
  this->name = " ";
  this->energy = 0;
  this->power = 0;
  this->size = 0;
  this->weight = 0;
  point = new Point2D();
  this->state = State.Unknown;
}

Entity::Entity(string name, double energy, double power, double size, double weight, Point2D* point, State state) 
{ 
  this->name = name;
  this->energy = energy;
  this->power = power;
  this->size = size;
  this->weight = weight;
  point = new Point2D();
  this->state = state.Unknown;               
}                   

void Entity::Attack(Entity entityAttacked) 
{
  RandomG r;
  if (this->power>entityAttacked.getPower())
  {
    r.getRandomDamage(entityAttacked);
  }
  //this->setState(Attacking);
}
     
void Entity::Move() 
{
  Random r;	
  this->position = r.getRandomCordinates();  //moving at random cordinates	
  //this->setState(Moving);
}

void Entity::DoAction(State action)
{
  switch (action)
  {
   case Moving:
   Move();
   setState(Moving); 
   break;
   
   case Attacking:
   setState(Attacking); 
   break;

   case Unknown:
   setState(Unknown); 
   break;
 }
}
