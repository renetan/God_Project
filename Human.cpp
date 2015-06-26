#include "Human.h"
#include <iosteam>

using namespace std;

Human::Human() {}

Human::Human(string name, double energy, double power, double size, double weight, Point2D* point, State state) : Animal(name, energy, power, size, weight, point, state);
{                
}                   

void Human::Analyze() 
{
 this->setState(Analyzing);
 RandomG mind;
 this->power=mind.RandomNumber();
}
