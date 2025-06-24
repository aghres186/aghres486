#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int count;
	cin >> count;
	vector<string>name(count);
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		cin >> name[i];
	}
	for (int i = 0; i < count; i++)
	{
		if (name[i] == "Icosahedron")
		{
			result += 20;
		}
		else if (name[i] == "Cube")
		{
			result += 6;
		}
		else if (name[i] == "Tetrahedron")
		{
			result += 4;
		}
		else if (name[i] == "Dodecahedron")
		{
			result += 12;
		}
		else if (name[i] == "Octahedron")
		{
			result += 8;
		}
	}
	cout << result;
	
}