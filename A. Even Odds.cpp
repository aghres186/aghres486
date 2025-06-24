#include <iostream>
using namespace std;
int main()
{
	int count;
	int k;
	cin >> count>>k;
	long long odd = (count + 1) / 2;
	if (k<=odd)
	{
		cout <<  (k * 2)-1 << endl;
	}
	else
	{
		cout << (k-odd) * 2 << endl;
	}
}