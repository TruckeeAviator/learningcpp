#include <iostream>

using namespace std;

int decToBinary(int number, int pwr)
{
	if (number >= pwr)
		cout << "1";
	else
		cout << "0";

	if (number >= pwr)
		return number - pwr;
	else
		return number;
}

int main()
{
	int number;

	cout << "Enter number (0 - 255): ";
	cin >> number;

	number = decToBinary(number,128);
	number = decToBinary(number,64);
	number = decToBinary(number,32);
	number = decToBinary(number,16);

	cout << " ";

	number = decToBinary(number,8);
	number = decToBinary(number,4);
	number = decToBinary(number,2);
	number = decToBinary(number,1);

	cout << endl;
	return 0;
}
