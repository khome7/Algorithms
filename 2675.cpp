#include <iostream>

using namespace std;

int main()
{
	int a, b;
	string s;

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> s;
		for (int p = 0; p < s.length(); p++) {
			for (int j = 0; j < b; j++)
			{
				cout << s[p];
			}
		}
		cout << endl;
	}
	return 0;

}