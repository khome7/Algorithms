#include <iostream>

using namespace std;

int main()
{
	int arr[26] = {0};
	string a;

	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}


	cin >> a;
	
	for (int i = 0; i < a.size(); i++)
	{
		if(arr[(int)a[i] - 97] == -1)
		arr[(int)a[i] - 97] = i;

		if (i == a.size() - 1)
		{
			for (int p = 0; p < 26; p++)
			{
				cout << arr[p] <<  ' ';
			}

		}
	}
}