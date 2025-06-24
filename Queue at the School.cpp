#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	int t;
	cin >> n;
	cin >> t;
	vector<char> lp(n);
	string result;
	
	for (int i = 0; i < n; i++)
	{
		cin >> lp[i];
		result += lp[i];
	}
	
	for (int i = 0; i < t; i++)
	{
		for (int l = 1; l <n  ; l++)
		{
			if (result[l-1] == 'B' && result[l] == 'G')
			{
				swap(result[l], result[l - 1]);
				l++;
				
			}
		}
	}
	cout << result;
	
}