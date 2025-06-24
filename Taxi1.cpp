#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int group1 = 0;
	int group2 = 0;
	int group3 = 0;
	int group4 = 0;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 1)group1++;
		if (x == 2)group2++;
		if (x == 3)group3++;
		if (x == 4)group4++;
	}
	int taxi = 0;
	taxi += group4;
	taxi += group3;
	if (group3 <= group1)
	{
		group1 -= group3;
	}
	else
	{
		group1 = 0;
	}
	taxi += group2 / 2;
	;
	if (group2% 2== 1)
	{
		taxi++;
		if (group1 >= 2)
		{
			group1 -= 2;
		}
		else
		{
			group1 = 0;
		}
	}
	taxi += group1 / 4;
	if (group1 % 4 != 0)
	{
		taxi++;
	}
	cout << taxi;
}