#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	int lucky_number;
	cin >> lucky_number;
	int result = 0;
	vector<int>luc_num{ 4,7,44,47,74,77,444,447,474,477,744,747,774,777 };
	for (int i = 0; i < luc_num.size(); i++)
	{
		if (lucky_number % luc_num[i] == 0)
		{
			result++;
		}
	}
	if (result>=1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}


}