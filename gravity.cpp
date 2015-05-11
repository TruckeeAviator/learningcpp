#include <iostream>
#include "gravity.h"
using namespace std;

double calculate(double height, int seconds)
{
	double distance;
	distance=Constant::gravity * (seconds*seconds) /2;
	return distance;
}

int main()
{
 	double height  = 0;
	int seconds = 0;
	int dropped = 0;

	cout << "Enter height of the object in meters: ";
	cin >> height;

	dropped=height-calculate(height,seconds);
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
	dropped=height-calculate(height,seconds);
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
	dropped=height-calculate(height,seconds);
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
	dropped=height-calculate(height,seconds);
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
	dropped=height-calculate(height,seconds);
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
}
