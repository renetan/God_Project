#include "Scene.h"
#include "Planet.h"
#icnlude<iostream>

using namespace std;

Scene::Scene(){}
Scene::Scene(Planet* p) 
{
 planets.push_back(p); //vkarva planetata v masiva
}

Scene::~Scene()
{
 while (!planets.empty())
 {
  delete planets.back();
  planets.pop_back();
 }
}

void Scene::CreateEntity(creature, p)
{ 
 switch(creature)
 {
  case animal:
  Animal m = new Animal("name");
  p.Add(m);
  break;

  case entity:
  Entity q = new Entity(" ");
  p.Add(q);
  break;

  case god:
  God n = new God(" ");
  p.Add(n);
  break;

  case human:
  Human r = new Human(" ");
  p.Add(r);
  break;

  case unknown:
  Entity s = new Entity(" ");
  p.Add(s);
  break;
  
  default:
  cout<<"There is no that kind of creature"<<endl;
  break;
 }
}
