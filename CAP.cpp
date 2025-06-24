#include <iostream>
#include <algorithm>//cAPS
using namespace std;
int main()
{
	string name;
	cin >> name;
	int sz = name.size();
	int countlower = 0;
	int countupper = 0;
	string result = "";
	string result2 = "";
	if (sz == 1)
	{
		transform(name.begin(), name.end(), name.begin(), ::tolower);
	}
	for (int i = 0; i < sz; i++)
	{
		if (isupper(name[i]))
		{
			countupper++;
		}
	}

	if (sz == countupper)
	{
		transform(name.begin(), name.end(), name.begin(), ::tolower);
		cout << name;
	}
	else if ((sz - 1) == countupper)
	{
		name[0] = char(toupper(name[0]));
		for (int i = 1; i < sz; i++)
		{
			name[i] = char(tolower(name[i]));
		}
		cout << name;
	}
	else
	{
		cout << name;
	}

}