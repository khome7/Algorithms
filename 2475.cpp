#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int aa, bb, cc, dd, ee;

	aa = a * a;
	bb = b * b;
	cc = c * c;
	dd = d * d;
	ee = e * e;

	int asd = aa + bb + cc + dd + ee;

	int v = asd % 10;

	cout << v;
	return 0;
}