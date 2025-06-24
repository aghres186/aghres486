#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int g1 = 0, g2 = 0, g3 = 0, g4 = 0,taxi=0;
	int x;
	
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 1)g1++;
		else if (x == 2)g2++;
		else if (x == 3)g3++;
		else if (x == 4)g4++;
	}
	taxi += g4;
	taxi += g3;
	if (g1 >= g3)
	{
		g1 -= g3;
	}
	else
	{
		g1 = 0;
	}
	taxi += g2 / 4;
	if (g2 % 2 == 1)
	{
		taxi++;
		if (g1 >= 2)
		{
			g1 -= 2;
		}
		else
		{
			g1 = 0;
		}
	}
	taxi += g1 / 4;
	if (g1 % 2 != 0)
	{
		taxi++;
	}
	cout << taxi;

}