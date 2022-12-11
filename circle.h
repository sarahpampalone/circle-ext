#include <iostream>
#include <cstdio>
#include <cmath>

class circle{
  public :
    void populate_classObj(double, double, double, double);
    double getRadius(double, double, double, double);
    double getCircumference(double, double, double, double);
    double getArea(double, double, double, double);
  protected :
    double getDistance(double, double, double, double);
  private :
    double x1, y1, x2, y2;
