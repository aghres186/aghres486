#include <iostream>
#include <vector>
using namespace std;
int  main()
{
	int count;
	cin >> count;
	int result = 1;
	vector<int> grop(count);
	for (int i = 0; i < count; i++)
	{
		cin >> grop[i];

	}
	for (int i = 0; i < count-1; i++)
	{
		if (grop[i] != grop[i + 1] )
		{
			result++;
		}
	}
	cout << result;
}