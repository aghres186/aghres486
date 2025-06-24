#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>vicnumber(n);
	int result = 0;
	int result2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> vicnumber[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (vicnumber[i] % 2 != 0)
		{
			result++;
		}
		else
		{

			result2++;
		}
	}
	if (result > 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (vicnumber[i] % 2 == 0)
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
	else if(result2>1)
	{
		for (int i = 0; i < n; i++)
		{
			if (vicnumber[i] % 2!= 0)
			{
				cout << i + 1 << endl;
				break;
			}
		}

	}


}