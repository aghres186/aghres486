#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int count;
	cin >> count;
	vector<int> num1(count);
	vector<int> num2(count);
	vector<int>num3(count);
	for (int i = 0; i < count; i++)
	{
		cin >> num1[i];
		cin>> num2[i];
		
	}
	for (int i = 0; i <count; i++)
	{
		if (num1[i] % num2[i] == 0)
		{
			num3[i] += 0;
		}
		else
		{
			int mod = num1[i] % num2[i];
			mod = num2[i] - mod;
			num3[i] += mod;
		}
	}
	for (int i = 0; i < num3.size(); i++)
	{
		cout << num3[i] << endl;
	}
}
