#include <iostream>
using namespace std;

bool prime(int x)
{
	if (x==1)
		return true;
	if (x==2)
		return true;
	if (x==3)
		return true;
	if (x==5)
		return true;
	if (x==7)
		return true;
	else
		return false;
}

int main()
{
	int number=0;
	cout << "Enter Number: ";
	cin >> number;

	number = prime(number);

if (number == true)
	{
		cout << "number" << " is prime." << endl;
	}
	else
	{
		cout << "number" << " is not Prime." << endl;
	}
}
