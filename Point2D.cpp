#include "Point2D.h"

#include <iostream>
#include <cmath>

using namespace std;

Point2D::Point2D()
{
 x = 0;
 y = 0;
}

Point2D::Point2D(double x, double y)
{
 this->x = x;
 this->y = y;    
}

double Point2D::get_x() const
{ 
 return this->x; 
}

double Point2D::get_y() const
{ 
 return this->y; 
}

void Roint2D::set_x(double x) 
{ 
 this->x = x; 
}

void Point2D::set_y(double y) 
{ 
 this->y = y; 
}

double Point2D::Distance(Point2D &p1, Point2D &p2) 
{ 
 return sqrt(pow((p1.getX() - p2.getX()), 2) + pow((p1.getX() - p2.getX()), 2));
} 
