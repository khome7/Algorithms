#include <iostream>

using namespace std;

int main()
{
	int count;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		if (i != count)
			cout << i + 1 << "\n";
		else if (i == count)
			cout << i + 1;
	}
}