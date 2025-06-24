#include <iostream>
#include<set>
using namespace std;
int main()
{
	int const leghours =4;
	set<int> color;
	int result = 0;
	int x;
	for (int i = 0; i < leghours; i++)
	{
		cin >> x;
		color.insert(x);
	}
	
	result = leghours - color.size();
	cout << result;
}