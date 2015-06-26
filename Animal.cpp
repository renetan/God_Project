#include "Animal.h"
#include "RandomG.h"
#include <iosteam>

using namespace std;

Animal::Animal() 
{ 
  this->name = " ";
  this->energy = 0;
  this->power = 0;
  this->size = 0;
  this->weight = 0;
  this->state = State.Unknown;
  point = new Point2D();
}

Animal::Animal(string name, double energy, double power, double size, double weight, Point2D point, State state) : Entity(name, energy, power, size, weight, point, state)
{      
}                   

void Animal::Eat()
{
  RandomG food;
  this->weight += food.RandomNumber();
  this->setState(Eating);
 }
 
void Animal::Sleep()
{
   RandomG food;
   this->energy += food.RandomNumber();
   this->setState(Sleeping);     
} 

void Animal::SearchingForFood()
{
   RandomG food;
   this->power -= food.RandomNumber();
   this->setState(SearchingForFood);
}
