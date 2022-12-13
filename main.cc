#include <iostream>
#include <cstdio>
#include <cmath>
#include <circle.h>
#define PI 3.1415926535
using namespace std;


int main()
{
	circle circ1;	//creates new object
	double x1, y1, x2, y2;
	int switchinput;
	cout << "Please enter your first coordinates (center of circle) line by line : " << endl;
	cin >> x1;
	cin >> y1;
	cout << "Please enter your second coordinates line by line : " << endl;
	cin >> x2;
	cin >> y2;
	circ1.populate_classObj(x1, y1, x2, y2);

do{
	cout << endl << "Pick a function : " << endl;
	cout << "1. Calculate the distance" << endl;
	cout << "2. Calculate the circumference" << endl;
	cout << "3. Calculate the area" << endl;
	cout << "4. Exit the program" << endl;
	cin >> switchinput; //switch option

	switch(switchinput){
		case 1 : //radius
			cout << "Distance = " << circ1.getRadius(x1, y1, x2, y2) << endl;
			break;
		case 2 :  //circumference
			cout << "Circumference = " << circ1.getCircumference(x1, y1, x2, y2) << endl;
			break;
		case 3 : //area
			cout << "Area = " << circ1.getArea(x1, y2, x2, y2) << endl;
			break;
		case 4 : //exit
			cout <<"Thank you for using the program!" << endl;
			return 0;
			break;
		default :
			cout << "Invalid input. \n";
			break;
		
	}
}
while(switchinput!=4);
}
