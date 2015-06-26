#include "Random.h"

#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

Point2D RandomG::getRanodmCordinates()
{
 Point2D position;
 srand(time(NULL));             // srand() gives the random fucntion a new starting point time(NULL)garanties getting a new starting point every time
 double x1 = rand() % 100 + 0;  //generates random numbers from 0 to 100
 double y1 = rand() % 100 + 0;
 position = Point2D(x1, y1);
 return position;
}

double RandomG::RandomNumber() 
{
 double number;
 srand(time(NULL));
 number = rand() % 50 + 0;
 return number;
}

void RandomG::getRandomDamage(Entity& smth)
{
 srand(time(NULL));                   
 int code = rand() % 3 + 1;          //random number between 1-3
 switch (code)
 {
  case 1:
  smth.setEnergy(smth.getEnergy() - 3);
  break;
  
  case 2:
  smth.setPower(smth.getPower() - 3);
  break;
  
  case 3:
  smth.setEnergy(smth.getEnergy() - 1);
  smth.setPower(smth.getEnergy() - 1);
  break;
 }
}
