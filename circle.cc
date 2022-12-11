#include <iostream>
#include <cstdio>
#include <cmath>
#include <circle.h>
#define PI 3.1415926535

void circle::populate_classObj(double a, double b, double c, double d){
  x1 = a;
  y1 = b;
  x2 = c;
  y2 = d;
}

double circle::getDistance(double x1, double y1, double x2, double y2){
  return sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );
}

double circle::getRadius(double x1, double y1, double x2, double y2){
  return getDistance(x1,y1,x2,y2);
}

double circle::getCircumference(double x1, double y1, double x2, double y2){
  return(2*PI*getRadius(x1,y1,x2,y2));
}

double circle::getArea(double x1, double y1, double x2, double y2){
  return(PI*getRadius(x1,y1,x2,y2)*getRadius(x1,y1,x2,y2));
}
