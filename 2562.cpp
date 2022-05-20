#include <iostream>

using namespace std;

int main()
{
	int n = 9,t,a = 0, c;
	int arr[9];
	
	for (int i = 0; i < 9; i++)
	{
		cin >> t;
		arr[i] = t;
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == 0) {
			c = arr[i];
			a = i + 1;
		}
		else
		{
			if (arr[i] > c)
			{
				c = arr[i];
				a = i + 1;
			}
		}
	}
	cout << c << endl;
	cout << a;


	return 0;

}