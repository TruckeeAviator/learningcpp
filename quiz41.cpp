#include <iostream>

using namespace std;

int main()
{
	unsigned int num1, num2;

	std::cout << "Enter Number: ";
	std::cin >> num1;
	std::cout << "Enter Number: ";
	std::cin >> num2;

	if (num1 > num2)
	{
		cout << num2;
		cout << " - " << num1;
	}
	else
	{
		cout << num1;
		cout << " - " << num2;
	}
}
