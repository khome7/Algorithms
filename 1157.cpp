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
	//�ϴ� �빮������ �ҹ������� �Ǻ��� �ʿ���
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
	//���� �ܾ ��� ���Դ��� �� �׸��� �װ� ��������
}