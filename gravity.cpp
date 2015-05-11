#include <iostream>
#include "gravity.h"
using namespace std;

double calculate(int height, int seconds)
{
	distance=Constant::gravity * (seconds*seconds) /2;
	return distance;
}

int main()
{
 	int height  = 0;
	int seconds = 0;
	int dropped = 0;

	cout << "Enter height of the object in meters: ";
	cin >> height;

	dropped=calculate(height,seconds)-height;
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
	dropped=calculate(height,seconds)-height;
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
	dropped=calculate(height,seconds)-height;
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
	dropped=calculate(height,seconds)-height;
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
	dropped=calculate(height,seconds)-height;
	cout << "At " << seconds << " the ball dropped " << dropped << " meters." << endl;
	seconds=seconds+1;
}
