#include <iostream>

using namespace std;

int main()
{
	int t, m;
	cin >> t >> m;
	int total = t * 60 + m;
	int sub = 45;
	int asd;
	int bsd;
	if (total > 45)
	{
		asd = total - sub;
		bsd = asd;
	}
	else 
	{
		asd = sub - total;
		bsd = 1440 - asd;
	}
	cout << bsd / 60 << ' ' << bsd % 60;
	return 0;
}