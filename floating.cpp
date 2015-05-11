#include <iostream>
using namespace std;

int exit();

double userInput()
{
	double fpInput;
	cout << "Enter Floating point number: ";
	cin >> fpInput;
	return fpInput;
}

char symbolInput()
{
	char sInput;
	cout << "Enter operator: ";
	cin >> sInput;
	if (sInput == '/')
		return sInput;
	if (sInput == '*')
		return sInput;
	if (sInput == '+')
		return sInput;
	if (sInput == '-')
		return sInput;
	else
	{
		cout << "Invalid Input!" << endl;
	}
}

void print(double printer)
{
	cout << printer << endl;
}
 
int main()
{
	double input1, input2;
	char sInput;
	input1 = userInput();
	sInput = symbolInput();
	input2 = userInput();
	if (sInput == '/')
		print(input1 / input2);
	if (sInput == '*')
		print(input1 / input2);
	if (sInput == '+')
		print(input1 / input2);
	if (sInput == '-')
		print(input1 / input2);
	
}
