#include<iostream>
using namespace std;
int main()
{
	string w;
	cin >> w;
	const string target = "HQ9";
	int result=0;
	for (int i = 0; i < w.size(); i++)
	{
		for (int l = 0; l < target.size(); l++)
		{
			if (target[l] == w[i])
			{
				result++;
			}
		}
	}
	if (result > 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}