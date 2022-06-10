#include <iostream>

using namespace std;

int main()
{
	int a;
	int c = 0;
	string b;

	cin >> a;
	cin >> b;

	//cout << b[0];
	for (int i = 0; i < a; i++)
	{
		c += (int)b[i] - 48;
	}
	cout << c;

	
	
}