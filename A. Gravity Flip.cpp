#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int count;
	cin >> count;
	vector<int>v1(count);
	for (int i = 0; i < count; i++)
	{
		cin >> v1[i];
	}
	sort(v1.begin(), v1.end());
	for (int i : v1)
	{
		cout << i << " ";
	}

}