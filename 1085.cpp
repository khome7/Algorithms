#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	int a = w - x;
	int b = x;
	int c = h - y;
	int d = y;

	int f = min({a,b,c,d});
	
	cout << f;
}