#include <iostream>
using namespace std;
int main()
{
	int count;
	cin >> count;
	int moud;
	double result = 0;
	for (int i = 0; i < count; i++)
	{
		cin >> moud;
		result += moud;
	}
	result /= count;
	cout << result;
}
