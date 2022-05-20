#include <iostream>

using namespace std;


int main()
{
	int count;
	cin >> count;
	int* arr = new int[count];
	
	for (int i = 0; i < count; i++) 
	{
		cin >> arr[i];
	}

	int max;
	int min;

	for (int i = 0; i < count; i++)
	{
		if (i == 0) max = arr[i];
		else
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		if (i == 0)
		{
			min = arr[i];
		}
		else
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
	}
	
	cout << min << ' ' << max;
	return 0;

	
	return 0;
}