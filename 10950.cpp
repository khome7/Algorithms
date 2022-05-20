#include <iostream>

using namespace std;

int main()
{
	/*int a, b;
	int count;
	cin >> count;
	int a1, a2, a3, a4, a5;
	for (int i = 0; i < count; i++)
	{
		cin >> a >> b;
		if (i == 0) a1 = a + b;
		if (i == 1) a2 = a + b;
		if (i == 2) a3 = a + b;
		if (i == 3) a4 = a + b;
		if (i == 4) a5 = a + b;
	}
	for (int i = 0; i < count; i++)
	{
		if (i == 0) cout << a1 << "\n";
		if (i == 1) cout << a2 << "\n";
		if (i == 2) cout << a3 << "\n";
		if (i == 3) cout << a4 << "\n";
		if (i == 4) cout << a5;
	}*/
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}



	return 0;
}