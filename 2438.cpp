#include <iostream>

using namespace std;
#define MAX 101;
#define MIN 0;

int main()
{
	int count;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < i +1; j++)
		{
			cout << "*";
			if (j == i)
			{
				cout << "\n";
			}
		}
	}

	return 0;
}