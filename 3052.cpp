#include <iostream>

using namespace std;

int main()
{
	int a;
	int b[42] = { 0, };
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		b[a % 42] = 1;
	}
	int count = 0;
	for (int i = 0; i < 42; i++)
	{
		if (b[i])
		{
			count++;
		}
	}
	cout << count;
	return 0;
}