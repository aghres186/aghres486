#include<iostream>
using namespace std;
int main()
{
	int h;//الطول
	int w;//العرض
	cin >> h>>w;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i ==0)cout << "#";
			else if (i > 1 && j % 4 != 0)cout << "#";
			else cout << ".";

			
			
		}
		cout << endl;//مع كل عرض اعمل سطر جديد 
	}
	
}
