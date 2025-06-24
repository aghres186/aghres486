#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int count;
	cin >> count;
	
	vector<int>frend(count);
	vector<int>frend2(count);
	
	for (int i = 0; i < count; i++)
	{
		cin >> frend[i];
	}
	for (int i = 0; i < count; i++)
	{
		frend2[frend[i] - 1] = i + 1;
	}
	for (int i = 0; i < count; i++)
	{
		cout << frend2[i] << " ";
	}
}
