#include <iostream>

using namespace std;
#define MAX 101;
#define MIN -1;

int main()
{
	int score;

	cin >> score;

	if (score >= 90 && score <= 100)
	{
		cout << "A";
	}
	else if (score >= 80 && score < 90)
	{
		cout << "B";
	}
	else if (score >= 70 && score < 80)
	{
		cout << "C";
	}
	else if (score >= 60 && score < 70)
	{
		cout << "D";
	}
	else 
	{
		cout << "F";
	}
	return 0;

}