#include<iostream>
using namespace std;
int main()
{
	long long count;
	cin >> count;
	long long result = 0;

	long long result1 = 0;
	if (count % 2 == 0)
	{
		result += count / 2;
	}
	else
	{
		result1 += -(count + 1) / 2;
	}
	cout << result + result1;

}