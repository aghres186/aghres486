#include <iostream>
using namespace std;
int main()
{
	int q;
	cin >> q;
	int re = 0;
	for (int i = 0; i < q; i++)
	{
		int qq;
		cin >> qq;
		re += qq;
	}
	if (re == 0)
	{
		cout << "EASY";
	}
	else {
		cout << "HARD";
	}
}