#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int count;
	cin >> count;
	
	for(int i=1;i<=count;i++)
	{ 
		if (i % 2 == 1)
		{
			cout << "I hate";
		}
		else {
			cout << "I love";
		}
		if (i == count)
		{
			cout << " it";
		}
		else
		{
			cout << " that ";
		}

	}
	cout << endl;
	
	
	
}