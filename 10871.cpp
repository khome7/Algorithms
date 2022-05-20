#include <iostream>

using namespace std;

int main()
{
	int count;
	int count2;

	cin >> count >> count2;

	int* arr = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> arr[i];

		if (arr[i] < count2)
		{
			cout << arr[i] << ' ';
		}
	}



	return 0;

}