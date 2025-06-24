#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int k, l, m, n, o;
	cin >> k >> l >> m >> n >> o;
	
	int result = 0;
	
	for (int i = 1; i <= o; i++)
	{
		if (i % k == 0 ||i%l == 0 || i % m == 0 ||i% n == 0 )
		{
			result++;
		}
	}

	cout << result;
	

}