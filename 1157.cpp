#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	int b;
	int c[26] = {0};
	cin >> a;

	for (int i = 0; i < a.size(); i++)
	{
		if ((int)a[i] > 96)
		{
			a[i] -= 32;
		}
		c[a[i] - 65] += 1;
	}
	//일단 대문자인지 소문자인지 판별이 필요함
	int max = 0;
	int dd;
	for (int i = 0; i < 26; i++)
	{
		if (c[i] > max)
		{
			max = c[i];
			dd = i;
		}
	}
	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		if (c[i] == max)
		{
			count++;
		}
	}
	if (count > 1)
	{
		cout << '?';
	}
	else 
	{
		char asd = dd + 65;
		cout << asd;
	}
	//같은 단어가 몇번 나왔는지 또 그리고 그게 무었인지
}