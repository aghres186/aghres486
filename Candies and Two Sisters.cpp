#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int count;
	cin >> count;
	vector<int>cal(count);
	int n;
	for (int i = 0; i < count; i++)
	{
		cin >> n;
		cal[i] += (n - 1) / 2;

	}
	for (int i : cal)
	{
		cout << i << endl;
	}
	

	
}