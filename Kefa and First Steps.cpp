#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	
	cin >> n;
	vector<int>day(n);
	int count = 1;
	int result = 1;
	int vactory = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> day[i];

	}
	
	for (int i = 1; i < n; i++)
	{
		if (day[i-1] <= day[i])
		{
			count++;
			vactory=max(vactory, count);
		}
		else
		{
			count = 1;
		}
		
	}
	cout << vactory << endl;
}
