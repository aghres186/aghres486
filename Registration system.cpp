#include <iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map<string, int>username;
	vector<string>save;
	string name;
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		if (username[name] == 0)
		{
			save.push_back("OK");
		}
		else
		{
			save.push_back(name + to_string(username[name]));
		}
		username[name]++;
	}
	for (auto i : save)
	{
		cout << i << endl;
	}
}