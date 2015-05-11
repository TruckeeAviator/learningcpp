#include <iostream>

using namespace std;

bool isEven(int number)
{
	if (number % 2 == 0)
		return true;
	else
		return false;
}

int main()
{
	int number;

	cout << "Enter a whole number: ";
	cin >> number;

	if (isEven(number) == true)
		cout << number << " is even\n";
	else
		cout << number << " is odd\n";
}
