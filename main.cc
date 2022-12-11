#include <iostream>
#include <cstdio>
#include <cmath>
#include <circle.h>
#define PI 3.1415926535

using namespace std;

int main(){
  circle circ1;
  double x1, y1, x2, y2;
  int value;
  cout << "Please enter your first coordinates (center of circle) : \n";
  cin >> x1;
  cin >> y1;
  circ1.populate_classObj(x1,y1,x2,y2);
  
do{
  cout << "\n Pick a function : \n";
  cout << "1. Calculate the distance \n";
  cout << "2. Calculate the circumference \n";
  cout << "3. Calculate the area \n";
  cout << "4. Exit the program \n";
  cin >> value; //switch value
  
  switch(value){
    case 1 : //radius
      cout << circ1.getRadius(x1,y1,x2,y2) << "\n";
      break;
    case 2 : // circumference
      cout << circ1.getCircumference(x1,y1,x2,y2) << "\n";
      break;
    case 3 : //area
      cout << circ1.getArea(x1,y1,x2,y2) << "\n";
      break;
    case 4 : //exit
      cout << "Thank you for using the program!" << "\n";
      return 0;
      break;
    default : 
      cout << "Invalid input. \n";
      break;
  }
}
while(value!=4);
}
