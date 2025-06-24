#include <iostream>
#include <set>
using namespace std;
int main()
{
	int count;
	int count2, count3;
	cin >> count;
	int my, frind;
	set<int>s1;
	cin >> count3;
	for (int i = 0; i < count3; i++)
	{
		cin >> my;
		
		s1.insert(my);
	}
	cin >> count2;
	for (int i = 0; i < count2; i++)
	{
		cin >> frind;
		s1.insert(frind);
	}
	if (s1.size() == count)
	{
		cout << "I become the guy." << endl;
	}
	else
	{
		cout << "Oh, my keyboard!" << endl;
	}
}