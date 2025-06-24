#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>victeam(n);
	vector<int>victeam2(n);
	for (int i = 0; i < n; i++)
	{
		cin >> victeam[i];
		cin >> victeam2[i];
	}
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (victeam[i] == victeam2[j])
			{
				result++;
			}
		}
	}
	cout << result << endl;
}