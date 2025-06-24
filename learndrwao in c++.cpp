#include <iostream>
using namespace std;
int main()
{
	int h;
	int w;
	cin >> h;
	cin >> w;
	for (int i = 1; i <= h; i++)
	{
		if (i % 2 == 1)
		{
			for (int k = 0; k < w; k++)
			{
				cout << "#";
			}
		}
		else if ((i / 2) % 2 == 0)
		{

			cout << "#";
			for (int j = 0; j < w-1; j++)
			{
				cout << ".";
				
				
			}
			
		}
		else
		{
			
			for (int n = 0; n < w - 1; n++)
			{
				cout << ".";
			}
			cout << "#";
		}
		
	

		cout << endl;
	}
		
			
	
}