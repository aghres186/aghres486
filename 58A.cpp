#include <iostream>
using namespace std;
int main()
{
	const string target = "hello";
	string wordkay;
	cin >> wordkay;
	int si = wordkay.size();
	string result = "";
	int j = 0;
	for (int i = 0; i < si;i++)
	{
		if (target[j] == wordkay[i])
		{
			j++;
		}
		if (j == target.size())
		{
			break;
		}
	}
	if (j == target.size())
	{
		cout << "YES";
	}
	else
	{
		cout << "NO" << endl;
	}
	
}