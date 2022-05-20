#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c,d;
	cin >> a; cin >> b; cin >> c;
	d = a * b * c;
	string asd = to_string(d);
	int pp = asd.length();

	int count = 0;
	int c2 = 0;
	//cout << asd << endl;
	//cout << pp << endl;
	/*if(asd[5] == (char)(3+48))
	cout << asd[5];*/

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= pp; j++)
		{
			if (asd[j] == (char)(i + 48))
			{
				count++;
			}
			if (j == pp)
			{
				if (asd[j] == (char)(i + 48))
				{
					count++;
				}
				cout << count << endl;
				count = 0;
			}
		}
	}
	
	

	return 0;
}