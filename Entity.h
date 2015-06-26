#ifndef ENTITY_H
#define	ENTITY_H

#include <string>

#include "Point2D.h"
#include "EntityType.h"
#include "State.h"
#include "RandomG.h"

class Entity
{
private: 
 string name, double energy, double power, double size, double weight, Point2D* point, State state;

public:
 Entity();
 Entity(string name, double energy, double power, double size, double weight, Point2D* point, State state);
   
 string getName() const 
 {
  return name;
 };
 double getEnergy() const 
 {
  return energy;
 };
 double getPower() const 
 {
  return power;
 };
 double getSize() const 
 {
  return size;
 };
 double getWeight() const 
 {
  return weight;
 };
 Point2D getPoint() const 
 {
  return point;
 };
 double getState() const 
 {
  return state;
 };
 void setName(string name) 
 {
  this->name = name;
 };
 void setEnergy(dobule energy) 
 {
  this->energy = energy;
 };    
 void setPower(double power) 
 {
  this->power = power;
 };
 void setSize(double size) 
 {
  this->size = size;
 };
 void setWeight(double weight) 
 {
  this->weight = weight;
 };
 void setPoint2D(Point2D point) 
 {
  this->point = point;
 };  
 void setState(State state) 
 {
  this->state = state;
 };    
   
 virtual void Attack(Entity& entityAttacked);
 virtual void Move();
 virtual void DoAction();

};

#endif
