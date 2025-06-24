#include <iostream>
#include<vector>
using namespace std;
int main()
{
	string b1,b2;
	cin >> b1;
	cin >> b2;
	string result="";
	if (b1.size() == b2.size())
	{
		for (int i = 0; i < b1.size(); i++)
		{
			if (b1[i] == b2[i])
			{
				result += '0';
			}
			else
			{
				result += '1';
			}
		}
	}
	cout << result;

}
