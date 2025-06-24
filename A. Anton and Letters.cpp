#include <iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
	string name;
	getline(cin, name);
	set<char > name2;
	int result = 0;
	for (int i = 0; i < name.size(); i++)
	{
		for (int j = 0; j < name.size(); j++)
		{
			if (name[i] != ' ' && name[i] != '{' && name[i] != '}' && name[i] != ',' && name[j] != ' ' && name[j] != '{' && name[j] != '}' && name[j] != ',')
			{
				name2.insert(name[i]);
			}
		}
	}
	cout<<name2.size();
}