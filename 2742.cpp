#include <iostream>

using namespace std;

int main()
{
	int count;

	cin >> count;

	for (int i = count; i > 0; i--) {
		if (i == 1) cout << i;
		else cout << i << "\n";
	}

	return 0;
}