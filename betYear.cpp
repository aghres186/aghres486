#include <iostream>
#include <vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	int year;
	cin >> year;
	year++;
	while (true)
	{
		int temp = year;
		vector<int>ry;
		for (int i = 0; i < 4; i++)
		{
			ry.push_back(temp % 10);
			temp /= 10;

		}

		reverse(ry.begin(), ry.end());
		set<int>se(ry.begin(), ry.end());
		if (se.size() == ry.size())
		{
			cout << year << endl;
			break;
		}
		else
		{

			year++;
		}
	}
	
}