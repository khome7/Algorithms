#include <iostream>

using namespace std;

int main()
{
	int a, b;

	while (cin >> a >> b)
	{
		if (a + b != 0)
			cout << a + b << "\n";
		else if (a + b == 0)
			break;
	}

	return 0;

}