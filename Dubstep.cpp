#include <iostream>
#include <string>
using namespace std;
int main()
{
	string  name;
	getline(cin, name);
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == 'W' && name[i + 1] == 'U' && name[i + 2] == 'B')
		{
			cout << " ";
			i += 2;
		}
		else
		{
			cout << name[i];
		}
	}

}