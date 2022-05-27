#include <iostream>

using namespace std;

int main()
{
	string a;
	string b;
	for (int i = 0; i < 8; i++)
	{
		cin >> a;
		b += a;
	}

	if (b == "12345678") {
		cout << "ascending";
	}
	else if (b == "87654321")
	{
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
}