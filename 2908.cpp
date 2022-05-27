#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b,aa,bb;

	cin >> a >> b;

	for (int i = 2; i >= 0; i--)
	{
		aa += a[i];
		bb += b[i];
	}

	cout << max(aa, bb);
	

	
	return 0;
}