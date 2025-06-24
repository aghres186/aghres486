#include <iostream>
#include <set>
using namespace std;
int main()
{
	int count;
	cin >> count;
	set<char>s1;
	char x;
	if (count >= 26)
	{
		for (int i = 0; i < count; i++)
		{
			cin >> x;
			s1.insert(tolower(x));
			
		}
		
		if (s1.size() == 26)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		cout << "NO" << endl;
	}
	
}