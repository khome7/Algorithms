#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int max = 0;

	cin >> a;
	float c[1000] = { 0 };
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		c[i] = b;
		if (b > max)
		{
			max = b;
		}
	}
	float d = 0;
	for (int i = 0; i < a; i++)
	{
		c[i] = (c[i] / max) * 100;
		d += c[i];
	}
	
	cout << d / a;
}