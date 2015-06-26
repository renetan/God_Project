#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
#include <cmath>

using namespace std;

class Point2D
{
private :
 double x ; 
 double y ; 
public :
 Point2D(); 
 Point2D(double, double);
 double get_x() const;
 double get_y() const;
 void set_x(double x);
 void set_y(double y);
 double Distance(Point2D &p1, Point2D &p2)
}

#endif
