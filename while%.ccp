#include <iostream>


using namespace std;

int main()
{
	int count = 1;
	
	while (count <= 100)
	{
		cout << count << " ";
		if (count % 20 == 0)
			cout << "\n";
		count++;
	}
}
