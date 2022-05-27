#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	int b = 0;
	int c = 0;
	cin >> a;

	string text;


	for (int i = 0; i < a; i++)
	{
		cin >> text;
		for (int p = 0; p < text.size(); p++)
		{
			if (text[p] == 'O')
			{
				b += 1;
				c = c + b;
			}
			else if (text[p] == 'X')
			{
				b = 0;
			}
		}
		cout << c << endl;
		b = 0; c = 0;
	}
}